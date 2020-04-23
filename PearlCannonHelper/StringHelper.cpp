#include "StringHelper.h"


const QString StringHelper::expRealNumber = "^-?\\d+\\.?\\d*$";
const QString StringHelper::expIntNumber = "^\\d+$";

QString StringHelper::reverse(const QString &str)
{
	QString ret;
	for (QChar i: str) ret.push_front(i);
	return ret;
}