#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PearlCannonHelper.h"
#include "SettingGenerator.h"
#include "FTLData.h"

class PearlCannonHelper : public QMainWindow
{
	Q_OBJECT

public:
	PearlCannonHelper(QWidget *parent = Q_NULLPTR);

public slots:
	void on_genOutputPushButton_clicked();
	void on_tabWidget_currentChanged(int);

	void on_bitLineEdit0_textChanged(QString);
	void on_bitLineEdit1_textChanged(QString);
	void on_bitLineEdit2_textChanged(QString);
	void on_bitLineEdit3_textChanged(QString);

	void on_pitchComboBox_currentIndexChanged(int);
	void on_amoutSpinBox1_valueChanged(int);
	void on_yawComboBox_currentIndexChanged(int);
	void on_amoutSpinBox2_valueChanged(int);
	void on_calcFTLPushButton_clicked();

	void on_genFromDestination_clicked();
	void on_settingWindow_groundYLineEdit_textEdited(QString);
	void on_settingWindow_maxTickLineEdit_textEdited(QString);

	void pasteSettingData(QString);
	void on_copyBitPushButton_clicked();
	void on_pasteBitPushButton_clicked();

private:
	Ui::PearlCannonHelperClass ui;
	SettingGenerator settingGenerator;
	QString getChunk(double, double);
	void changeFTLBit0(QString, bool);
	void changeFTLBit1(QString, bool);
	void changeFTLBit2(QString, bool);
	void changeFTLBit3(QString, bool);
	int m_pitch, m_amount1, m_yaw, m_amount2;
};
