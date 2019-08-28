#pragma once

#include <QString>

namespace StringHelper
{
	const QString expRealNumber = "^-?\\d+\\.?\\d*$";
	QString reverse(const QString &);
	QString addPrefix(QString, QChar, int);
}

