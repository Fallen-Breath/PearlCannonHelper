#include "SettingGenerator.h"
#include "LiteProjectile.h"
#include "StringHelper.h"
#include <tuple>
#include <algorithm>
#include <QStandardItemModel>

using namespace std;

SettingGenerator::SettingGenerator(QWidget *parent): QWidget(parent)
{
	setAttribute(Qt::WA_QuitOnClose, false);
	ui.setupUi(this);

	QString expRealNumber = "^-?\\d+\\.?\\d*$";
	ui.groundYLineEdit->setValidator(new QRegExpValidator(QRegExp(expRealNumber), this));
	ui.srcXLineEdit->setValidator(new QRegExpValidator(QRegExp(expRealNumber), this));
	ui.srcZLineEdit->setValidator(new QRegExpValidator(QRegExp(expRealNumber), this));
	ui.floorYLineEdit->setValidator(new QRegExpValidator(QRegExp(expRealNumber), this));
	ui.maxTickLineEdit->setValidator(new QRegExpValidator(QRegExp("\\d{1,9}"), this));

	ui.maxUnitSpinBox->setMaximum(this->data.maxUnit);
	ui.srcXLineEdit->setText(QString::number(this->data.srcX));
	ui.srcZLineEdit->setText(QString::number(this->data.srcZ));
	ui.floorYLineEdit->setText(QString::number(this->data.floorY));

	ui.dstXLineEdit->setValidator(new QRegExpValidator(QRegExp(StringHelper::expRealNumber), this));
	ui.dstZLineEdit->setValidator(new QRegExpValidator(QRegExp(StringHelper::expRealNumber), this));

}

void SettingGenerator::on_groundYLineEdit_textEdited(QString text)
{
	emit groundYLineEdit_textEdited(text);
}
void SettingGenerator::on_maxTickLineEdit_textEdited(QString text)
{
	emit maxTickLineEdit_textEdited(text);
}
void SettingGenerator::on_srcXLineEdit_textEdited(QString text)
{
	this->data.srcX = text.toDouble();
}
void SettingGenerator::on_srcZLineEdit_textEdited(QString text)
{
	this->data.srcZ = text.toDouble();
}
void SettingGenerator::on_floorYLineEdit_textEdited(QString text)
{
	this->data.floorY = text.toDouble();
}
void SettingGenerator::on_mainWindow_groundYLineEdit_textEdited(QString text)
{
	if (text == ui.groundYLineEdit->text()) return;
	ui.groundYLineEdit->setText(text);
}
void SettingGenerator::on_mainWindow_maxTickLineEdit_textEdited(QString text)
{
	if (text == ui.maxTickLineEdit->text()) return;
	ui.maxTickLineEdit->setText(text);
}

QString SettingGenerator::getBitSequence(dot d)
{
	int amount1 = get<5>(d), amount2 = get<6>(d), pitch = get<7>(d), yaw = get<8>(d);
	QString ret;
	ret += StringHelper::addPrefix(QString::number(pitch, 2), '0', 1) + ' ';
	ret += StringHelper::reverse(StringHelper::addPrefix(QString::number(amount1, 2), '0', 5)) + ' ';
	ret += StringHelper::addPrefix(QString::number(yaw, 2), '0', 2) + ' ';
	ret += StringHelper::addPrefix(QString::number(amount2, 2), '0', 5);
	return ret;
}

void SettingGenerator::on_genPushButton_clicked()
{
	double dstPosX = ui.dstXLineEdit->text().toDouble();
	double dstPosZ = ui.dstZLineEdit->text().toDouble();
	int maxUnit = ui.maxUnitSpinBox->value();
	int maxTick = ui.maxTickLineEdit->text().toInt();
	int maxResult = ui.settingAmountSpinBox->value();
	double groundY = ui.groundYLineEdit->text().toInt();

	m_result.clear();
	for (int pitch = 0; pitch < 2; pitch++)
		for (int amount1 = 0; amount1 <= maxUnit; amount1++)
			for (int yaw = 0; yaw < 4; yaw++)
				for (int amount2 = 0; amount2 <= maxUnit; amount2++)
				{
					LiteProjectile pearl(data.getSourcePos(pitch), data.motion[pitch]);
					pearl.accelerate(data.getThrust(pitch, amount1, yaw, amount2));
					pearl.tick();
					for (int tick = 0; tick < maxTick && pearl.getY() >= groundY; tick++)
					{
						m_result.push_back(dot(pearl.getPosition().distance(vec3d(dstPosX, pearl.getY(), dstPosZ)), pearl.getX(), pearl.getY(), pearl.getZ(), tick + 1, amount1, amount2, pitch, yaw));
						pearl.tick();
					}
				}
	sort(m_result.begin(), m_result.end());

	// 输出至表格
	QStandardItemModel *model = new QStandardItemModel;
	ui.outputTableView->setModel(model);
	const int ColumnCount = 10;
	model->setColumnCount(ColumnCount);
	for (int i = 0; i < 1; i++) ui.outputTableView->setColumnWidth(i, 137);
	for (int i = 1; i < 5; i++) ui.outputTableView->setColumnWidth(i, 90);
	for (int i = 5; i < ColumnCount; i++) ui.outputTableView->setColumnWidth(i, 50);
	ui.outputTableView->verticalHeader()->setMinimumWidth(70);
	ui.outputTableView->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);

	QStringList column, row;
	column << "Sequence" << "Distance" << "PosX" << "PosY" << "PosZ" << "Tick" << "Num1" << "Num2" << "Pitch" << "Yaw";
	model->setHorizontalHeaderLabels(column); 
	for (int i = 0; i < min(m_result.size(), maxResult); i++)
	{	
		QList<QStandardItem *> list;
		list.append(new QStandardItem(getBitSequence(m_result[i])));
		list.append(new QStandardItem(QString::number(get<0>(m_result[i]), 'f', 4)));
		list.append(new QStandardItem(QString::number(get<1>(m_result[i]), 'f', 4)));
		list.append(new QStandardItem(QString::number(get<2>(m_result[i]), 'f', 4)));
		list.append(new QStandardItem(QString::number(get<3>(m_result[i]), 'f', 4)));
		list.append(new QStandardItem(QString::number(get<4>(m_result[i]))));
		list.append(new QStandardItem(QString::number(get<5>(m_result[i]))));
		list.append(new QStandardItem(QString::number(get<6>(m_result[i]))));
		list.append(new QStandardItem(QString::number(get<7>(m_result[i]))));
		list.append(new QStandardItem(QString::number(get<8>(m_result[i]))));
		model->appendRow(list); 
		for (int j = 0; j < ColumnCount; j++) model->item(i, j)->setTextAlignment(Qt::AlignCenter);
		model->setHeaderData(i, Qt::Vertical, "Rank " + QString::number(i + 1));
	}
}

void SettingGenerator::on_outputTableView_clicked(QModelIndex index)
{
	int row = index.row();
	if (row == -1) return;
	QString seq = getBitSequence(m_result[row]);
	ui.chosenSettingLineEdit->setText("[Rank " + QString::number(row + 1) + "] " + seq);
}
void SettingGenerator::on_setPushButton_clicked()
{
	QString text = ui.chosenSettingLineEdit->text();
	if (text.length() < 16) return;
	emit sendSetting(text.right(16));
	this->close();
}