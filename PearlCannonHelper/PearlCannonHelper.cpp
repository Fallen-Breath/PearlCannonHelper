#include "PearlCannonHelper.h"
#include "Pearl.h"
#include "StringHelper.h"
#include "Constant.h"
#include <QFileDialog>
#include <QClipboard>
#include <QMessageBox>
#include <QSettings>
#include <QDebug>
#include <cmath>
using namespace std;

PearlCannonHelper::PearlCannonHelper(QWidget *parent): QMainWindow(parent)
{
	setAttribute(Qt::WA_QuitOnClose, true);
	ui.setupUi(this);

	// 珍珠状态
	ui.posXLineEdit->setValidator(new QRegExpValidator(QRegExp(StringHelper::expRealNumber), this));
	ui.posYLineEdit->setValidator(new QRegExpValidator(QRegExp(StringHelper::expRealNumber), this));
	ui.posZLineEdit->setValidator(new QRegExpValidator(QRegExp(StringHelper::expRealNumber), this));
	ui.motionXLineEdit->setValidator(new QRegExpValidator(QRegExp(StringHelper::expRealNumber), this));
	ui.motionYLineEdit->setValidator(new QRegExpValidator(QRegExp(StringHelper::expRealNumber), this));
	ui.motionZLineEdit->setValidator(new QRegExpValidator(QRegExp(StringHelper::expRealNumber), this));

	// 珍珠炮bit
	ui.bitLineEdit->setValidator(new QRegExpValidator(QRegExp("([0,1]|){1,27}"), this));

	// 输出条件
	ui.groundYLineEdit->setValidator(new QRegExpValidator(QRegExp(StringHelper::expRealNumber), this));
	ui.maxTickLineEdit->setValidator(new QRegExpValidator(QRegExp(StringHelper::expIntNumber), this));

	// 珍珠炮信息
	ui.pearlXLineEdit->setValidator(new QRegExpValidator(QRegExp(StringHelper::expRealNumber), this));
	ui.pearlZLineEdit->setValidator(new QRegExpValidator(QRegExp(StringHelper::expRealNumber), this));
	ui.PlayerYLineEdit->setValidator(new QRegExpValidator(QRegExp(StringHelper::expRealNumber), this));

	// 配置生成
	ui.groundYLineEdit_2->setValidator(new QRegExpValidator(QRegExp(StringHelper::expRealNumber), this));
	ui.maxTickLineEdit_2->setValidator(new QRegExpValidator(QRegExp(StringHelper::expIntNumber), this));

	connect(ui.groundYLineEdit, SIGNAL(textEdited(QString)), ui.groundYLineEdit_2, SLOT(setText(QString)));
	connect(ui.groundYLineEdit_2, SIGNAL(textEdited(QString)), ui.groundYLineEdit, SLOT(setText(QString)));
	connect(ui.maxTickLineEdit, SIGNAL(textEdited(QString)), ui.maxTickLineEdit_2, SLOT(setText(QString)));
	connect(ui.maxTickLineEdit_2, SIGNAL(textEdited(QString)), ui.maxTickLineEdit, SLOT(setText(QString)));	

	connect(ui.displayMomentumCheckBox, SIGNAL(stateChanged(int)), this, SLOT(generateTrace()));

	connect(ui.isStartFromExplosionCheckBox, SIGNAL(stateChanged(int)), this, SLOT(updatePearlInfo()));
	connect(ui.pitchComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(updateSetting()));
	connect(ui.directionComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(updateSetting()));
	connect(ui.amoutSpinBox1, SIGNAL(valueChanged(int)), this, SLOT(updateSetting()));
	connect(ui.amoutSpinBox2, SIGNAL(valueChanged(int)), this, SLOT(updateSetting()));

	connect(ui.pearlXLineEdit, SIGNAL(textEdited(QString)), this, SLOT(updatePearlInfo()));
	connect(ui.pearlZLineEdit, SIGNAL(textEdited(QString)), this, SLOT(updatePearlInfo()));
	connect(ui.PlayerYLineEdit, SIGNAL(textEdited(QString)), this, SLOT(updatePearlInfo()));


	ui.tabWidget->setTabPosition(QTabWidget::South);
	ui.traceTableWidget->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);
	ui.traceTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
	ui.traceTableWidget->horizontalHeader()->setStretchLastSection(true);
	ui.settingTableWidget->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);
	ui.settingTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
	ui.settingTableWidget->horizontalHeader()->setStretchLastSection(true);

	loadSetting();
	updateAll();
}

QString getChunkString(vec3d pos)
{
	int x = int(floor(pos.x / 16));
	int z = int(floor(pos.z / 16));
	return QString("[%1, %2]").arg(x).arg(z);
}

// in 1gt: [logger -> explode -> move -> drag -> gravity]
void PearlCannonHelper::generateTrace()
{
	double _x = ui.posXLineEdit->text().toDouble();
	double _y = ui.posYLineEdit->text().toDouble();
	double _z = ui.posZLineEdit->text().toDouble();
	double _mx = ui.motionXLineEdit->text().toDouble();
	double _my = ui.motionYLineEdit->text().toDouble();
	double _mz = ui.motionZLineEdit->text().toDouble();
	Pearl pearl(vec3d(_x, _y, _z), vec3d(_mx, _my, _mz));
	double groundY = ui.groundYLineEdit->text().toDouble();
	double maxTick = ui.maxTickLineEdit->text().toInt();

	bool displayMomentum = ui.displayMomentumCheckBox->isChecked();
	const int ColumnCount = 3 - (!displayMomentum);
	ui.traceTableWidget->setRowCount(0);
	ui.traceTableWidget->setColumnCount(ColumnCount);

	QStringList column;
	column << "Chunk" << "Position" << "Momentum";
	ui.traceTableWidget->setHorizontalHeaderLabels(column);
	for (int i = 0; i < maxTick && pearl.getY() >= groundY; i++)
	{
		ui.traceTableWidget->insertRow(ui.traceTableWidget->rowCount());
		ui.traceTableWidget->setItem(i, 0, new QTableWidgetItem(getChunkString(pearl.getPosition())));
		ui.traceTableWidget->setItem(i, 1, new QTableWidgetItem(pearl.getPosition().toString()));
		if (displayMomentum) ui.traceTableWidget->setItem(i, 2, new QTableWidgetItem(pearl.getMomentum().toString()));
		for (int j = 0; j < ColumnCount; j++) ui.traceTableWidget->item(i, j)->setTextAlignment(Qt::AlignCenter);
		pearl.tick();
	}
}

Pearl PearlCannonHelper::getPearl()
{
	double x = ui.pearlXLineEdit->text().toDouble();
	double y = ui.PlayerYLineEdit->text().toDouble();
	double z = ui.pearlZLineEdit->text().toDouble();
	return Pearl(vec3d(x, y, z) + Constant::delta_position[setting.pitch], Constant::motion[setting.pitch]);
}

void PearlCannonHelper::loadSetting()
{
	QSettings settings(Constant::iniFileName, QSettings::IniFormat);
	ui.pearlXLineEdit->setText(settings.value("pearlX", ui.pearlXLineEdit->text()).toString());
	ui.pearlZLineEdit->setText(settings.value("pearlZ", ui.pearlZLineEdit->text()).toString());
	ui.PlayerYLineEdit->setText(settings.value("playerY", ui.PlayerYLineEdit->text()).toString());
	ui.rotationComboBox->setCurrentIndex(settings.value("rotation", ui.rotationComboBox->currentIndex()).toInt());
	ui.maxTNTSpinBox->setValue(settings.value("maxTNT", ui.maxTNTSpinBox->value()).toInt());
	ui.groundYLineEdit->setText(settings.value("groundY", ui.groundYLineEdit->text()).toString());
	ui.maxTickLineEdit->setText(settings.value("maxTickTime", ui.maxTickLineEdit->text()).toString());
}

void PearlCannonHelper::saveSetting()
{
	QSettings settings(Constant::iniFileName, QSettings::IniFormat);
	settings.setValue("pearlX", ui.pearlXLineEdit->text());
	settings.setValue("pearlZ", ui.pearlZLineEdit->text());
	settings.setValue("playerY", ui.PlayerYLineEdit->text());
	settings.setValue("rotation", ui.rotationComboBox->currentIndex());
	settings.setValue("maxTNT", ui.maxTNTSpinBox->value());
	settings.setValue("groundY", ui.groundYLineEdit->text());
	settings.setValue("maxTickTime", ui.maxTickLineEdit->text());
}

void PearlCannonHelper::updatePearlInfo()
{
	Pearl pearl = getPearl();
	pearl.accelerate(setting.getThrust());

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

	ui.bitLineEdit->setText(setting.toString());
	ui.pitchComboBox->setCurrentIndex(setting.pitch);
	ui.directionComboBox->setCurrentIndex(setting.direction);
	ui.amoutSpinBox1->setValue(setting.amount_l);
	ui.amoutSpinBox2->setValue(setting.amount_r);

	generateTrace();
	saveSetting();
}

void PearlCannonHelper::updateSetting()
{
	setting.amount_l = ui.amoutSpinBox1->value();
	setting.amount_r = ui.amoutSpinBox2->value();
	setting.direction = ui.directionComboBox->currentIndex();
	setting.pitch = ui.pitchComboBox->currentIndex();
	updatePearlInfo();
}

void PearlCannonHelper::updateAll()
{
	on_genPushButton_clicked();
	updatePearlInfo();
}

void PearlCannonHelper::on_copyBitPushButton_clicked()
{
	QApplication::clipboard()->setText(setting.toString());
}
void PearlCannonHelper::on_pasteBitPushButton_clicked()
{
	QString text = QApplication::clipboard()->text();
	try
	{
		setting = Setting(text);
		updateAll();
	}
	catch (...)
	{
		return;
	}
}

bool cmp(const SortingData &a, const SortingData &b)
{
	return a.dis < b.dis;
}

bool inRange(int direction, double angle, double delta)
{
	const double pi = acos(-1);
	double a1 = Setting(0, 1, direction, 0).getThrust().angle();
	double a2 = Setting(1, 0, direction, 0).getThrust().angle();
	if (a2 < a1) swap(a1, a2);
	if (abs(a2 - a1) > pi) a1 += 2 * pi;
	return max(a1, angle - delta) < min(a2, angle + delta);
}

void PearlCannonHelper::on_genPushButton_clicked()
{
	double dstPosX = ui.dstXLineEdit->text().toDouble();
	double dstPosZ = ui.dstZLineEdit->text().toDouble();
	int maxTNT = ui.maxTNTSpinBox->value();
	int maxTick = ui.maxTickLineEdit_2->text().toInt();
	double groundY = ui.groundYLineEdit_2->text().toInt();

	Pearl pearl0 = getPearl();
	double angle = (vec3d(dstPosX, pearl0.getY(), dstPosZ) - pearl0.getPosition()).angle();
	double delta = 0.1 / maxTNT;
	result.clear();
	int cnt = 0;
	for (int d = 0; d < 4; d++)
		if (inRange(d, angle, delta))
		{
			int l = 0;
			for (int i = 0; i <= maxTNT; i++)
			{
				bool flag_success = false, flag_break = false;
				for (int j = l; !flag_break && j <= maxTNT; j++)
					for (int p = 0; !flag_break && p < 2; p++)
					{
						cnt++;
						Setting s = Setting(i, j, d, p);
						double a = s.getThrust().angle();
						if (!(abs(angle - a) < delta))
						{
							if (flag_success) flag_break = true;
							continue;
						}
						if (!flag_success) l = j;
						flag_success = true;
						Pearl pearl = pearl0;
						pearl.accelerate(s.getThrust());
						pearl.tick();
						double mn = 1e10;
						SortingData best = SortingData{mn, pearl.getPosition(), -1, s};
						for (int tick = 0; tick < maxTick; tick++)
						{
							pearl.tick();
							if (pearl.getY() < groundY) break;
							double dis = pearl.getPosition().distance(vec3d(dstPosX, pearl.getY(), dstPosZ));
							if (dis < mn)
							{
								mn = dis;
								best = SortingData{mn, pearl.getPosition(), tick + 1, s};
							}
						}
						if (mn != 1e10) result.push_back(best);
					}
			}
		}
	sort(result.begin(), result.end(), cmp);
	qDebug() << result.size() << ' ' << cnt;

	// 输出至表格
	QStringList column;
	column << "Distance" << "Position" << "Tick" << "Num1" << "Num2" << "Total TNT";
	int ColumnCount = column.length();
	ui.settingTableWidget->setRowCount(0);
	ui.settingTableWidget->setColumnCount(ColumnCount);
	ui.settingTableWidget->setHorizontalHeaderLabels(column);
	for (int i = 0; i < min(result.size(), 100); i++)
	{
		ui.settingTableWidget->insertRow(ui.settingTableWidget->rowCount());
		ui.settingTableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(result[i].dis, 'f', 4)));
		ui.settingTableWidget->setItem(i, 1, new QTableWidgetItem(result[i].pos.toString()));
		ui.settingTableWidget->setItem(i, 2, new QTableWidgetItem(QString::number(result[i].tick)));
		ui.settingTableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(result[i].setting.amount_l)));
		ui.settingTableWidget->setItem(i, 4, new QTableWidgetItem(QString::number(result[i].setting.amount_r)));
		ui.settingTableWidget->setItem(i, 5, new QTableWidgetItem(QString::number(result[i].setting.amount_l + result[i].setting.amount_r)));
		for (int j = 0; j < ColumnCount; j++) ui.settingTableWidget->item(i, j)->setTextAlignment(Qt::AlignCenter);
	}
}

void PearlCannonHelper::on_settingTableWidget_cellClicked(int row, int column)
{
	if (row == -1) return;
	ui.selectedSettingBitsLineEdit->setText(result[row].setting.toString());
}
void PearlCannonHelper::on_applyPushButton_pressed()
{
	int row = ui.settingTableWidget->currentRow();
	if (row == -1) return;
	setting = result[row].setting;
	updatePearlInfo();
	ui.tabWidget->setCurrentIndex(1);
}

void PearlCannonHelper::on_rotationComboBox_currentTextChanged()
{
	setting.rotation = ui.rotationComboBox->currentIndex();
	updateAll();
}
