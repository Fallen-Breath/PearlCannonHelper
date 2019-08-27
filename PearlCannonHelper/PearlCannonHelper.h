#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PearlCannonHelper.h"

class PearlCannonHelper : public QMainWindow
{
	Q_OBJECT

public:
	PearlCannonHelper(QWidget *parent = Q_NULLPTR);

private:
	Ui::PearlCannonHelperClass ui;
};
