#include "PearlCannonHelper.h"
#include <QFileDialog>
#include <QClipboard>
#include <QMessageBox>
#include <QStandardItemModel>

PearlCannonHelper::PearlCannonHelper(QWidget *parent): QMainWindow(parent)
{
	ui.setupUi(this);

	QString expRealNumber = "^-?\\d+\\.?\\d*$";

	// ÕäÖé×´Ì¬
	ui.posXLineEdit->setValidator(new QRegExpValidator(QRegExp(expRealNumber), this));
	ui.posYLineEdit->setValidator(new QRegExpValidator(QRegExp(expRealNumber), this));
	ui.posZLineEdit->setValidator(new QRegExpValidator(QRegExp(expRealNumber), this));
	ui.motionXLineEdit->setValidator(new QRegExpValidator(QRegExp(expRealNumber), this));
	ui.motionYLineEdit->setValidator(new QRegExpValidator(QRegExp(expRealNumber), this));
	ui.motionZLineEdit->setValidator(new QRegExpValidator(QRegExp(expRealNumber), this));

	// ÕäÖéÅÚbit
	ui.bitLineEdit0->setValidator(new QRegExpValidator(QRegExp("[0,1]{1,1}"), this));
	ui.bitLineEdit1->setValidator(new QRegExpValidator(QRegExp("[0,1]{1,5}"), this));
	ui.bitLineEdit2->setValidator(new QRegExpValidator(QRegExp("[0,1]{1,2}"), this));
	ui.bitLineEdit3->setValidator(new QRegExpValidator(QRegExp("[0,1]{1,5}"), this));

	// Êä³öÌõ¼þ
	ui.minYLineEdit->setValidator(new QRegExpValidator(QRegExp(expRealNumber), this));
	ui.maxTickLineEdit->setValidator(new QRegExpValidator(QRegExp("\\d{1,9}"), this));

	m_pitch = m_amount1 = m_yaw = m_amount2 = 1;
	changeFTLBit0("0", true);
	changeFTLBit1("0", true);
	changeFTLBit2("0", true);
	changeFTLBit3("0", true);
}

QString PearlCannonHelper::getChunk(double x, double z)
{
	QString ret = "[" + QString::number(floor(x / 16), 'f', 0) 
		+ "," + QString::number(floor(z / 16), 'f', 0) + "]";
	return ret;
}

void PearlCannonHelper::doMovement(double &x, double &y, double &z, double &mx, double &my, double &mz)
{
	x += mx;
	y += my;
	z += mz;

	mx *= 0.99;
	mz *= 0.99;
	my *= 0.99;
	my -= 0.03;
}

// in 1gt: [logger -> explode -> move -> drag -> gravity]
void PearlCannonHelper::on_genOutputPushButton_clicked()
{
	double x = ui.posXLineEdit->text().toDouble();
	double y = ui.posYLineEdit->text().toDouble();
	double z = ui.posZLineEdit->text().toDouble();
	double mx = ui.motionXLineEdit->text().toDouble();
	double my = ui.motionYLineEdit->text().toDouble();
	double mz = ui.motionZLineEdit->text().toDouble();
	double groundY = ui.minYLineEdit->text().toDouble();
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
	for (int i = 0; i <= maxTick && y >= groundY; i++)
	{	
		QList<QStandardItem *> list;
		list.append(new QStandardItem(QString::number(x, 'f', 6)));
		list.append(new QStandardItem(QString::number(y, 'f', 6)));
		list.append(new QStandardItem(QString::number(z, 'f', 6)));
		list.append(new QStandardItem(getChunk(x, z)));
		list.append(new QStandardItem(QString::number(mx, 'f', 6)));
		list.append(new QStandardItem(QString::number(my, 'f', 6)));
		list.append(new QStandardItem(QString::number(mz, 'f', 6)));

		model->appendRow(list); 
		model->setHeaderData(i, Qt::Vertical, "Tick " + QString::number(i));
		for (int j = 0; j < 7; j++)
		{
			model->item(i, j)->setTextAlignment(Qt::AlignCenter);
		}

		doMovement(x, y, z, mx, my, mz);
	}
}

QString PearlCannonHelper::reverse(const QString &str)
{
	QString ret;
	for (QChar i: str) ret.push_front(i);
	return ret;
}

QString PearlCannonHelper::addPrefix(QString str, QChar c, int n)
{
	int cnt = n - str.length();
	while (cnt--)
	{
		str.push_front(c);
	}
	return str;
}

void PearlCannonHelper::changeFTLBit0(QString str, bool doAddPrefix)
{
	int x = str.toInt(nullptr, 2);
	if (m_pitch == x) return;
	m_pitch = x;
	if (doAddPrefix)
	{
		str = addPrefix(str, '0', 1);
	}
	ui.bitLineEdit0->setText(str);
	ui.pitchComboBox->setCurrentIndex(x);
}
void PearlCannonHelper::changeFTLBit1(QString str, bool doAddPrefix)
{
	int x = reverse(str).toInt(nullptr, 2);
	if (m_amount1 == x) return;
	m_amount1 = x;
	if (doAddPrefix)
	{
		str = addPrefix(str, '0', 5);
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
		str = addPrefix(str, '0', 2);
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
		str = addPrefix(str, '0', 5);
	}
	ui.bitLineEdit3->setText(str);
	ui.amoutSpinBox2->setValue(x);
}

void PearlCannonHelper::on_bitLineEdit0_textEdited(QString text)
{
	changeFTLBit0(text, false);
}
void PearlCannonHelper::on_bitLineEdit1_textEdited(QString text)
{
	changeFTLBit1(text, false);
}
void PearlCannonHelper::on_bitLineEdit2_textEdited(QString text)
{
	changeFTLBit2(text, false);
}
void PearlCannonHelper::on_bitLineEdit3_textEdited(QString text)
{
	changeFTLBit3(text, false);
}

void PearlCannonHelper::on_pitchComboBox_currentIndexChanged(int x)
{
	changeFTLBit0(QString::number(x, 2), true);
}
void PearlCannonHelper::on_amoutSpinBox1_valueChanged(int x)
{
	changeFTLBit1(reverse(QString::number(x, 2)), true);
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
	const double pos[2][3] = {{78.0625, 182.357766, 43.0625}, {78.0625, 182.345698, 43.0625}};
	const double motion[2][3] = {{0, 0.206522, 0}, {0, 0.174457, 0}};
	const double thrust[2][3] = {{12.05429788, 0.1321336, 12.05429788}, {12.05083642, -0.0447100, 12.05083642}};
	const int sign1[4][3] = {{+1, +1, -1}, {-1, +1, +1}, {-1, +1, -1}, {-1, +1, -1}};
	const int sign2[4][3] = {{+1, +1, +1}, {+1, +1, +1}, {+1, +1, -1}, {-1, +1, +1}};

	double x = pos[m_pitch][0], y = pos[m_pitch][1], z = pos[m_pitch][2];
	double mx = motion[m_pitch][0], my = motion[m_pitch][1], mz = motion[m_pitch][2];

	double thrustX = thrust[m_pitch][0] * (m_amount1 * sign1[m_yaw][0] + m_amount2 * sign2[m_yaw][0]);
	double thrustY = thrust[m_pitch][1] * (m_amount1 * sign1[m_yaw][1] + m_amount2 * sign2[m_yaw][1]);
	double thrustZ = thrust[m_pitch][2] * (m_amount1 * sign1[m_yaw][2] + m_amount2 * sign2[m_yaw][2]);

	mx += thrustX;
	my += thrustY;
	mz += thrustZ;

	if (!ui.isStartFromExplosionCheckBox->isChecked())
	{
		doMovement(x, y, z, mx, my, mz);
	}

	ui.posXLineEdit->setText(QString::number(x, 'f'));
	ui.posYLineEdit->setText(QString::number(y, 'f'));
	ui.posZLineEdit->setText(QString::number(z, 'f'));
	ui.motionXLineEdit->setText(QString::number(mx, 'f'));
	ui.motionYLineEdit->setText(QString::number(my, 'f'));
	ui.motionZLineEdit->setText(QString::number(mz, 'f'));
}