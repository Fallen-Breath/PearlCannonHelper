#include "PearlCannonHelper.h"
#include "TIS360FTLData.h"
#include "LiteProjectile.h"
#include "StringHelper.h"
#include <QFileDialog>
#include <QClipboard>
#include <QMessageBox>
#include <QStandardItemModel>

PearlCannonHelper::PearlCannonHelper(QWidget *parent): QMainWindow(parent)
{
	setAttribute(Qt::WA_QuitOnClose, true);
	ui.setupUi(this);

	ui.languagePushButton->close();

	// 珍珠状态
	ui.posXLineEdit->setValidator(new QRegExpValidator(QRegExp(StringHelper::expRealNumber), this));
	ui.posYLineEdit->setValidator(new QRegExpValidator(QRegExp(StringHelper::expRealNumber), this));
	ui.posZLineEdit->setValidator(new QRegExpValidator(QRegExp(StringHelper::expRealNumber), this));
	ui.motionXLineEdit->setValidator(new QRegExpValidator(QRegExp(StringHelper::expRealNumber), this));
	ui.motionYLineEdit->setValidator(new QRegExpValidator(QRegExp(StringHelper::expRealNumber), this));
	ui.motionZLineEdit->setValidator(new QRegExpValidator(QRegExp(StringHelper::expRealNumber), this));

	// 珍珠炮bit
	ui.bitLineEdit0->setValidator(new QRegExpValidator(QRegExp("[0,1]{1,1}"), this));
	ui.bitLineEdit1->setValidator(new QRegExpValidator(QRegExp("[0,1]{1,5}"), this));
	ui.bitLineEdit2->setValidator(new QRegExpValidator(QRegExp("[0,1]{1,2}"), this));
	ui.bitLineEdit3->setValidator(new QRegExpValidator(QRegExp("[0,1]{1,5}"), this));

	// 输出条件
	ui.groundYLineEdit->setValidator(new QRegExpValidator(QRegExp(StringHelper::expRealNumber), this));
	ui.maxTickLineEdit->setValidator(new QRegExpValidator(QRegExp("\\d{1,9}"), this));

	// 初始化数据
	m_pitch = m_amount1 = m_yaw = m_amount2 = 1;
	changeFTLBit0("0", true);
	changeFTLBit1("0", true);
	changeFTLBit2("0", true);
	changeFTLBit3("0", true);

	ui.amoutSpinBox1->setMaximum(TIS360FTLData::maxUnit);
	ui.amoutSpinBox2->setMaximum(TIS360FTLData::maxUnit);

	// 同步设置生成器窗口间的数据
	connect(ui.groundYLineEdit, SIGNAL(textEdited(QString)), &settingGenerator, SLOT(on_mainWindow_groundYLineEdit_textEdited(QString)));
	connect(ui.maxTickLineEdit, SIGNAL(textEdited(QString)), &settingGenerator, SLOT(on_mainWindow_maxTickLineEdit_textEdited(QString)));
	connect(&settingGenerator, SIGNAL(groundYLineEdit_textEdited(QString)), this, SLOT(on_settingWindow_groundYLineEdit_textEdited(QString)));
	connect(&settingGenerator, SIGNAL(maxTickLineEdit_textEdited(QString)), this, SLOT(on_settingWindow_maxTickLineEdit_textEdited(QString)));

	// 从设置生成器窗口获取设置信息
	connect(&settingGenerator, SIGNAL(sendSetting(QString)), this, SLOT(pasteSettingData(QString)));
}

void PearlCannonHelper::on_settingWindow_groundYLineEdit_textEdited(QString text)
{
	if (text == ui.groundYLineEdit->text()) return;
	ui.groundYLineEdit->setText(text);
}
void PearlCannonHelper::on_settingWindow_maxTickLineEdit_textEdited(QString text)
{
	if (text == ui.maxTickLineEdit->text()) return;
	ui.maxTickLineEdit->setText(text);
}

QString PearlCannonHelper::getChunk(double x, double z)
{
	QString ret = "[" + QString::number(floor(x / 16), 'f', 0) 
		+ "," + QString::number(floor(z / 16), 'f', 0) + "]";
	return ret;
}

void PearlCannonHelper::on_tabWidget_currentChanged(int index)
{
	if (index == 1)
	{
		on_genOutputPushButton_clicked();
	}
}
// in 1gt: [logger -> explode -> move -> drag -> gravity]
void PearlCannonHelper::on_genOutputPushButton_clicked()
{
	double _x = ui.posXLineEdit->text().toDouble();
	double _y = ui.posYLineEdit->text().toDouble();
	double _z = ui.posZLineEdit->text().toDouble();
	double _mx = ui.motionXLineEdit->text().toDouble();
	double _my = ui.motionYLineEdit->text().toDouble();
	double _mz = ui.motionZLineEdit->text().toDouble();
	LiteProjectile pearl(vec3d(_x, _y, _z), vec3d(_mx, _my, _mz));
	double groundY = ui.groundYLineEdit->text().toDouble();
	double maxTick = ui.maxTickLineEdit->text().toInt();

	QStandardItemModel *model = new QStandardItemModel;
	ui.outputTableView->setModel(model);
	model->setColumnCount(7);
	for (int i = 0; i < 3; i++) ui.outputTableView->setColumnWidth(i, 118);
	for (int i = 3; i < 4; i++) ui.outputTableView->setColumnWidth(i, 100);
	for (int i = 4; i < 7; i++) ui.outputTableView->setColumnWidth(i, 100);
	ui.outputTableView->verticalHeader()->setMinimumWidth(70);
	ui.outputTableView->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);

	QStringList column, row;
	column << "PosX" << "PosY" << "PosZ" << "Chunk" << "MotionX" << "MotionY" << "MotionZ";
	model->setHorizontalHeaderLabels(column); 
	for (int i = 0; i <= maxTick && pearl.getY() >= groundY; i++)
	{	
		QList<QStandardItem *> list;
		list.append(new QStandardItem(QString::number(pearl.getX(), 'f', 6)));
		list.append(new QStandardItem(QString::number(pearl.getY(), 'f', 6)));
		list.append(new QStandardItem(QString::number(pearl.getZ(), 'f', 6)));
		list.append(new QStandardItem(getChunk(pearl.getX(), pearl.getZ())));
		list.append(new QStandardItem(QString::number(pearl.getMx(), 'f', 6)));
		list.append(new QStandardItem(QString::number(pearl.getMy(), 'f', 6)));
		list.append(new QStandardItem(QString::number(pearl.getMz(), 'f', 6)));

		model->appendRow(list); 
		model->setHeaderData(i, Qt::Vertical, "Tick " + QString::number(i + 1));
		for (int j = 0; j < 7; j++)
		{
			model->item(i, j)->setTextAlignment(Qt::AlignCenter);
		}

		pearl.tick();
	}
}

void PearlCannonHelper::changeFTLBit0(QString str, bool doAddPrefix)
{
	int x = str.toInt(nullptr, 2);
	if (m_pitch == x) return;
	m_pitch = x;
	if (doAddPrefix)
	{
		str = StringHelper::addPrefix(str, '0', 1);
	}
	ui.bitLineEdit0->setText(str);
	ui.pitchComboBox->setCurrentIndex(x);
}
void PearlCannonHelper::changeFTLBit1(QString str, bool doAddPrefix)
{
	int x = StringHelper::reverse(str).toInt(nullptr, 2);
	if (m_amount1 == x) return;
	m_amount1 = x;
	if (doAddPrefix)
	{
		str = StringHelper::addPrefix(str, '0', 5);
	}
	ui.bitLineEdit1->setText(str);
	ui.amoutSpinBox1->setValue(x);
}
void PearlCannonHelper::changeFTLBit2(QString str, bool doAddPrefix)
{
	int x = str.toInt(nullptr, 2);
	if (m_yaw == x) return;
	m_yaw = x;
	if (doAddPrefix)
	{
		str = StringHelper::addPrefix(str, '0', 2);
	}
	ui.bitLineEdit2->setText(str);
	ui.yawComboBox->setCurrentIndex(x);
}
void PearlCannonHelper::changeFTLBit3(QString str, bool doAddPrefix)
{
	int x = str.toInt(nullptr, 2);
	if (m_amount2 == x) return;
	m_amount2 = x;
	if (doAddPrefix)
	{
		str = StringHelper::addPrefix(str, '0', 5);
	}
	ui.bitLineEdit3->setText(str);
	ui.amoutSpinBox2->setValue(x);
}

void PearlCannonHelper::on_bitLineEdit0_textChanged(QString text)
{
	changeFTLBit0(text, false);
}
void PearlCannonHelper::on_bitLineEdit1_textChanged(QString text)
{
	changeFTLBit1(text, false);
}
void PearlCannonHelper::on_bitLineEdit2_textChanged(QString text)
{
	changeFTLBit2(text, false);
}
void PearlCannonHelper::on_bitLineEdit3_textChanged(QString text)
{
	changeFTLBit3(text, false);
}

void PearlCannonHelper::on_pitchComboBox_currentIndexChanged(int x)
{
	changeFTLBit0(QString::number(x, 2), true);
}
void PearlCannonHelper::on_amoutSpinBox1_valueChanged(int x)
{
	changeFTLBit1(StringHelper::reverse(QString::number(x, 2)), true);
}
void PearlCannonHelper::on_yawComboBox_currentIndexChanged(int x)
{
	changeFTLBit2(QString::number(x, 2), true);
}
void PearlCannonHelper::on_amoutSpinBox2_valueChanged(int x)
{
	changeFTLBit3(QString::number(x, 2), true);
}

void PearlCannonHelper::on_calcFTLPushButton_clicked()
{
	using namespace TIS360FTLData;

	LiteProjectile pearl(scrPos[m_pitch], motion[m_pitch]);
	pearl.accelerate(getThrust(m_pitch, m_amount1, m_yaw, m_amount2));

	if (!ui.isStartFromExplosionCheckBox->isChecked())
	{
		pearl.tick();
	}

	ui.posXLineEdit->setText(QString::number(pearl.getX(), 'f'));
	ui.posYLineEdit->setText(QString::number(pearl.getY(), 'f'));
	ui.posZLineEdit->setText(QString::number(pearl.getZ(), 'f'));
	ui.motionXLineEdit->setText(QString::number(pearl.getMx(), 'f'));
	ui.motionYLineEdit->setText(QString::number(pearl.getMy(), 'f'));
	ui.motionZLineEdit->setText(QString::number(pearl.getMz(), 'f'));
}
void PearlCannonHelper::on_genFromDestination_clicked()
{
	settingGenerator.show();
}
void PearlCannonHelper::on_copyBitPushButton_clicked()
{
	QString text;
	text += ui.bitLineEdit0->text() + ' ';
	text += ui.bitLineEdit1->text() + ' ';
	text += ui.bitLineEdit2->text() + ' ';
	text += ui.bitLineEdit3->text() + ' ';
	QApplication::clipboard()->setText(text);
}
void PearlCannonHelper::pasteSettingData(QString str)
{
	QString setting;
	for (auto i: str)
		if (i == '0' || i == '1')
			setting.append(i);
	if (setting.length() != 13) return;

	ui.bitLineEdit0->setText(setting.mid(0, 1));
	ui.bitLineEdit1->setText(setting.mid(1, 5));
	ui.bitLineEdit2->setText(setting.mid(6, 2));
	ui.bitLineEdit3->setText(setting.mid(8, 5));

	on_calcFTLPushButton_clicked();
}
void PearlCannonHelper::on_pasteBitPushButton_clicked()
{
	QString text = QApplication::clipboard()->text();
	pasteSettingData(text);
}