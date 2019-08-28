#include "StringHelper.h"

namespace StringHelper
{
	QString reverse(const QString &str)
	{
		QString ret;
		for (QChar i: str) ret.push_front(i);
		return ret;
	}
	QString addPrefix(QString str, QChar c, int n)
	{
		int cnt = n - str.length();
		for (int i = 0; i < cnt; i++)
		{
			str.push_front(c);
		}
		return str;
	}
}