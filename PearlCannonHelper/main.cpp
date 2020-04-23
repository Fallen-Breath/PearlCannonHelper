#include "PearlCannonHelper.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	PearlCannonHelper w;
	w.show();
	return a.exec();
}
