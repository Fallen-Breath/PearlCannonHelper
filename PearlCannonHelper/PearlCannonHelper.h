#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PearlCannonHelper.h"

class PearlCannonHelper : public QMainWindow
{
	Q_OBJECT

public:
	PearlCannonHelper(QWidget *parent = Q_NULLPTR);

public slots:
	void on_genOutputPushButton_clicked();
	void on_bitLineEdit0_textEdited(QString);
	void on_bitLineEdit1_textEdited(QString);
	void on_bitLineEdit2_textEdited(QString);
	void on_bitLineEdit3_textEdited(QString);
	void on_pitchComboBox_currentIndexChanged(int);
	void on_amoutSpinBox1_valueChanged(int);
	void on_yawComboBox_currentIndexChanged(int);
	void on_amoutSpinBox2_valueChanged(int);
	void on_calcFTLPushButton_clicked();

private:
	Ui::PearlCannonHelperClass ui;
	void doMovement(double &, double &, double &, double &, double &, double &); 
	QString getChunk(double, double);
	QString reverse(const QString &);
	QString addPrefix(QString, QChar, int);
	void changeFTLBit0(QString, bool);
	void changeFTLBit1(QString, bool);
	void changeFTLBit2(QString, bool);
	void changeFTLBit3(QString, bool);
	int m_pitch, m_amount1, m_yaw, m_amount2;
};
