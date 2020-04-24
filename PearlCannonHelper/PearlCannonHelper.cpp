#include "PearlCannonHelper.h"
#include "Pearl.h"
#include "StringHelper.h"
#include "Constant.h"
#include <QFileDialog>
#include <QClipboard>
#include <QMessageBox>
#include <QTranslator>
#include <QSettings>
#include <QDebug>
#include <cmath>
using namespace std;

PearlCannonHelper::PearlCannonHelper(QWidget *parent): QMainWindow(parent)
{
	flag_initializing = true;
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

	ui.tabWidget->setTabPosition(QTabWidget::South);
	ui.traceTableWidget->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);
	ui.traceTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
	ui.traceTableWidget->horizontalHeader()->setStretchLastSection(true);
	ui.settingTableWidget->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);
	ui.settingTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
	ui.settingTableWidget->horizontalHeader()->setStretchLastSection(true);

	loadSetting();
	on_languageComboBox_activated(ui.languageComboBox->currentIndex());

	connect(ui.groundYLineEdit, SIGNAL(textEdited(QString)), ui.groundYLineEdit_2, SLOT(setText(QString)));
	connect(ui.groundYLineEdit_2, SIGNAL(textEdited(QString)), ui.groundYLineEdit, SLOT(setText(QString)));
	connect(ui.groundYLineEdit, SIGNAL(textChanged(QString)), this, SLOT(updatePearlInfo()));
	connect(ui.maxTickLineEdit, SIGNAL(textEdited(QString)), ui.maxTickLineEdit_2, SLOT(setText(QString)));
	connect(ui.maxTickLineEdit_2, SIGNAL(textEdited(QString)), ui.maxTickLineEdit, SLOT(setText(QString)));

	connect(ui.displayMomentumCheckBox, SIGNAL(stateChanged(int)), this, SLOT(generateTrace()));
	connect(ui.posXLineEdit, SIGNAL(textEdited(QString)), this, SLOT(generateTrace()));
	connect(ui.posYLineEdit, SIGNAL(textEdited(QString)), this, SLOT(generateTrace()));
	connect(ui.posZLineEdit, SIGNAL(textEdited(QString)), this, SLOT(generateTrace()));
	connect(ui.motionXLineEdit, SIGNAL(textEdited(QString)), this, SLOT(generateTrace()));
	connect(ui.motionYLineEdit, SIGNAL(textEdited(QString)), this, SLOT(generateTrace()));
	connect(ui.motionZLineEdit, SIGNAL(textEdited(QString)), this, SLOT(generateTrace()));

	connect(ui.isStartFromExplosionCheckBox, SIGNAL(stateChanged(int)), this, SLOT(updatePearlInfo()));
	connect(ui.pitchComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(updateSetting()));
	connect(ui.directionComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(updateSetting()));
	connect(ui.amoutSpinBox1, SIGNAL(valueChanged(int)), this, SLOT(updateSetting()));
	connect(ui.amoutSpinBox2, SIGNAL(valueChanged(int)), this, SLOT(updateSetting()));

	connect(ui.pearlXLineEdit, SIGNAL(textEdited(QString)), this, SLOT(updatePearlInfo()));
	connect(ui.pearlZLineEdit, SIGNAL(textEdited(QString)), this, SLOT(updatePearlInfo()));
	connect(ui.PlayerYLineEdit, SIGNAL(textEdited(QString)), this, SLOT(updatePearlInfo()));
	connect(ui.bitLineEdit, SIGNAL(textEdited(QString)), this, SLOT(tryLoadBitSeq(QString)));

	connect(ui.settingTableWidget->horizontalHeader(), SIGNAL(sectionClicked(int)), this, SLOT(sortSettingTable(int)));


	flag_initializing = false;
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
	if (flag_initializing) return;
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
	column << tr("Chunk") << tr("Position") << tr("Momentum");
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
	QString groundY = settings.value("groundY", ui.groundYLineEdit->text()).toString();
	ui.groundYLineEdit->setText(groundY);
	ui.groundYLineEdit_2->setText(groundY);
	ui.maxTickLineEdit->setText(settings.value("maxTickTime", ui.maxTickLineEdit->text()).toString());
	ui.languageComboBox->setCurrentIndex(settings.value("Language", ui.languageComboBox->currentIndex()).toInt());
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
	settings.setValue("Language", ui.languageComboBox->currentIndex());
	qDebug() << ui.languageComboBox->currentIndex();
}

void PearlCannonHelper::updatePearlInfo()
{
	if (flag_initializing) return;
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

	Setting t_setting = setting;
	ui.bitLineEdit->setText(t_setting.toString());
	ui.pitchComboBox->setCurrentIndex(t_setting.pitch);
	ui.directionComboBox->setCurrentIndex(t_setting.direction);
	ui.amoutSpinBox1->setValue(t_setting.amount_l);
	ui.amoutSpinBox2->setValue(t_setting.amount_r);

	generateTrace();
	saveSetting();
}

void PearlCannonHelper::updateSetting()
{
	if (flag_initializing) return;
	setting.amount_l = ui.amoutSpinBox1->value();
	setting.amount_r = ui.amoutSpinBox2->value();
	setting.direction = ui.directionComboBox->currentIndex();
	setting.pitch = ui.pitchComboBox->currentIndex();
	updatePearlInfo();
}

void PearlCannonHelper::updateAll()
{
	if (flag_initializing) return;
	on_genPushButton_clicked();
	updatePearlInfo();
}

void PearlCannonHelper::tryLoadBitSeq(QString text)
{
	try
	{
		setting = Setting(text);
		updatePearlInfo();
	}
	catch (...)
	{
		return;
	}
}

void PearlCannonHelper::on_copyBitPushButton_clicked()
{
	QApplication::clipboard()->setText(setting.toString());
}
void PearlCannonHelper::on_pasteBitPushButton_clicked()
{
	QString text = QApplication::clipboard()->text();
	tryLoadBitSeq(text);
}

bool intersect(double a1, double a2, double b1, double b2)
{
	return max(a1, b1) < min(a2, b2);
}

bool inRange(int direction, double angle, double delta)
{
	const double pi = acos(-1);
	double a1 = Setting(0, 1, direction, 0).getThrust().angle();
	double a2 = Setting(1, 0, direction, 0).getThrust().angle();
	if (a2 < a1) swap(a1, a2);
	if (abs(a2 - a1) > pi)
	{
		a1 += 2 * pi;
		swap(a1, a2);
	}
	double b1 = angle - delta;
	double b2 = angle + delta;
	return intersect(a1, a2, b1, b2) || intersect(a1 + 2 * pi, a2 + 2 * pi, b1, b2) || intersect(a1, a2, b1 + 2 * pi, b2 + 2 * pi);
}

void PearlCannonHelper::updateResult()
{
	QStringList column;
	column << tr("Distance") << tr("Position") << tr("Tick") << tr("Light") << tr("Dark") << tr("Total TNT");
	int ColumnCount = column.length();
	ui.settingTableWidget->setRowCount(0);
	ui.settingTableWidget->setColumnCount(ColumnCount);
	ui.settingTableWidget->setHorizontalHeaderLabels(column);
	for (int i = 0; i < result.size(); i++)
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

bool cmpDistance(const SortingData &a, const SortingData &b)
{
	return a.dis < b.dis;
}
bool cmpTick(const SortingData &a, const SortingData &b)
{
	return a.tick < b.tick;
}
bool cmpLightGray(const SortingData &a, const SortingData &b)
{
	return a.setting.amount_l < b.setting.amount_l;
}
bool cmpDarkGray(const SortingData &a, const SortingData &b)
{
	return a.setting.amount_r < b.setting.amount_r;
}
bool cmpTNT(const SortingData &a, const SortingData &b)
{
	return a.setting.amount_l + a.setting.amount_r < b.setting.amount_l + b.setting.amount_r;
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
	double delta = 1.0 / maxTNT;
	QVector<SortingData> srt;
	int cnt = 0;
	for (int d = 0; d < 4; d++)
		if (inRange(d, angle, delta))
		{
			qDebug() << "Searching in direction " << d;
			for (int i = 0; i <= maxTNT; i++)
			{
				bool flag_success = false, flag_break = false;
				for (int j = 0; !flag_break && j <= maxTNT; j++)
					for (int p = 0; !flag_break && p < 2; p++)
					{
						Setting s = Setting(i, j, d, p);
						cnt++;
						double a = s.getThrust().angle();
						if (!(abs(angle - a) < delta))
						{
							if (flag_success) flag_break = true;
							continue;
						}
						flag_success = true;
						Pearl pearl = pearl0;
						pearl.accelerate(s.getThrust());
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
						if (mn != 1e10) srt.push_back(best);
					}
			}
		}
	qDebug() << srt.size() << ' ' << cnt;

	sort(srt.begin(), srt.end(), cmpDistance);
	result.clear();
	for (int i = 0; i < min(srt.size(), 100); i++) result.push_back(srt[i]);
	updateResult();
	lastClickedSettingColumn = 0;
}
void PearlCannonHelper::sortSettingTable(int column)
{
	switch (column)
	{
	case 0:
	case 1:
		sort(result.begin(), result.end(), cmpDistance);
		break;
	case 2:
		sort(result.begin(), result.end(), cmpTick);
		break;
	case 3:
		sort(result.begin(), result.end(), cmpLightGray);
		break;
	case 4:
		sort(result.begin(), result.end(), cmpDarkGray);
		break;
	case 5:
		sort(result.begin(), result.end(), cmpTNT);
		break;
	default:
		break;
	}
	if (column == lastClickedSettingColumn)
	{
		lastClickedSettingColumn = -1;
		for (int i = 0; i < result.size() / 2; i++)
			swap(result[i], result[result.size() - i - 1]);
	}
	else
	{
		lastClickedSettingColumn = column;
	}
	updateResult();
}

void PearlCannonHelper::on_languageComboBox_activated(int index)
{
	QMap<int, QString> map;
	map[0] = "en";
	map[1] = "zh";
	static QTranslator m;
	m.load(QString(":/language/pearlcannonhelper_%1.qm").arg(map[index]));
	qDebug() << "Language changing to " << map[index];
	qApp->installTranslator(&m);
	saveSetting();
	ui.retranslateUi(this);
	loadSetting();
	updateAll();
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
