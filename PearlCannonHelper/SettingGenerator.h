#pragma once

#include <QWidget>
#include <tuple>
#include "ui_SettingGenerator.h"
#include "FTLData.h"

typedef std::tuple<double, double, double, double, int, int, int, int, int> dot;

class SettingGenerator : public QWidget
{
	Q_OBJECT

public:
	SettingGenerator(QWidget *parent = Q_NULLPTR);

public slots:
	void on_genPushButton_clicked();
	void on_groundYLineEdit_textEdited(QString);
	void on_srcXLineEdit_textEdited(QString);
	void on_srcZLineEdit_textEdited(QString);
	void on_floorYLineEdit_textEdited(QString);
	void on_maxTickLineEdit_textEdited(QString);
	void on_mainWindow_groundYLineEdit_textEdited(QString);
	void on_mainWindow_maxTickLineEdit_textEdited(QString);
	void on_setPushButton_clicked();
	void on_outputTableView_clicked(QModelIndex);

signals:
	void groundYLineEdit_textEdited(QString);
	void maxTickLineEdit_textEdited(QString);
	void sendSetting(QString);

private:
	friend class PearlCannonHelper;
	Ui::SettingGenerator ui;
	QString getBitSequence(dot);
	QVector<dot> m_result;
	FTLData data;
};
