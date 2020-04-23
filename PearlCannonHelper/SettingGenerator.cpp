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