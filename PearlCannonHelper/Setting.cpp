#include "Setting.h"
#include "StringHelper.h"
#include "Constant.h"
#include <QVector>


int Setting::rotation = 0;

Setting::Setting(): Setting(0, 0, 0, 0)
{
}

Setting::Setting(int amount_l, int amount_r, int direction, int pitch)
{
	this->amount_l = amount_l;
	this->amount_r = amount_r;
	this->direction = direction;
	this->pitch = pitch;
}

Setting::Setting(QString text) : Setting()
{
	QVector<bool> bits;
	for (auto c: text)
		if (c == '0' || c == '1')
			bits.push_back(c == '1');
	if (bits.length() != 27) throw "Illegal setting bits";
	auto p = bits.begin();
	this->amount_l += 260 * 1 * (*p++);
	this->amount_l += 260 * 2 * (*p++);
	this->amount_l += 260 * 4 * (*p++);
	this->amount_r += 260 * 4 * (*p++);
	this->amount_r += 260 * 2 * (*p++);
	this->amount_r += 260 * 1 * (*p++);
	this->amount_l += 1 * 1 * (*p++);
	this->amount_l += 1 * 2 * (*p++);
	this->amount_l += 1 * 4 * (*p++);
	this->amount_l += 1 * 8 * (*p++);
	this->amount_r += 1 * 8 * (*p++);
	this->amount_r += 1 * 4 * (*p++);
	this->amount_r += 1 * 2 * (*p++);
	this->amount_r += 1 * 1 * (*p++);
	this->pitch = (*p++);
	this->amount_l += 10 * 1 * (*p++);
	this->amount_l += 10 * 2 * (*p++);
	this->amount_l += 10 * 4 * (*p++);
	this->amount_l += 10 * 8 * (*p++);
	this->amount_l += 10 * 16 * (*p++);
	this->direction += 2 * (*p++);
	this->direction += 1 * (*p++);
	this->amount_r += 10 * 16 * (*p++);
	this->amount_r += 10 * 8 * (*p++);
	this->amount_r += 10 * 4 * (*p++);
	this->amount_r += 10 * 2 * (*p++);
	this->amount_r += 10 * 1 * (*p++);
}

Setting::~Setting()
{
}

int qpow(int a, int b)
{
	int ans = 1;
	for (; b > 0; b >>= 1, a *= a)
		if (b & 1)
			ans = ans * a;
	return ans;
}

QString split(int &num, int step, int k, int maxCount)
{
	step *= qpow(2, k - 1);
	QString ret;
	for (; k > 0; k--, step /= 2)
	{
		int t = qpow(2, k - 1);
		bool flag = step <= num && t <= maxCount;
		ret += QString::number(flag);
		if (flag)
		{
			num -= step;
			maxCount -= t;
		}
	}
	return ret;
}

QString Setting::toString()
{
	int a = this->amount_l, b = this->amount_r, d = this->direction, p = this->pitch;
	QString a1 = StringHelper::reverse(split(a, 260, 3, Constant::max260Count));
	QString a2 = StringHelper::reverse(split(a, 10, 5, Constant::max10Count));
	QString a3 = StringHelper::reverse(split(a, 1, 4, Constant::max1Count));
	QString b1 = split(b, 260, 3, Constant::max260Count);
	QString b2 = split(b, 10, 5, Constant::max10Count);
	QString b3 = split(b, 1, 4, Constant::max1Count);
	QString ds = split(d, 1, 2, 3);
	QString ps = split(p, 1, 1, 1);
	return QString("[%1 %2] [%3 %4] [%5 %6 %7 %8]").arg(a1).arg(b1).arg(a3).arg(b3).arg(ps).arg(a2).arg(ds).arg(b2);
}

vec3d Setting::getThrust()
{
	vec3d thrust_l = Constant::thrust[pitch] * amount_l;
	vec3d thrust_r = Constant::thrust[pitch] * amount_r;
	thrust_l.x *= Constant::sign_l[rotation][direction][0];
	thrust_l.y *= Constant::sign_l[rotation][direction][1];
	thrust_l.z *= Constant::sign_l[rotation][direction][2];
	thrust_r.x *= Constant::sign_r[rotation][direction][0];
	thrust_r.y *= Constant::sign_r[rotation][direction][1];
	thrust_r.z *= Constant::sign_r[rotation][direction][2];
	return thrust_l + thrust_r;
}
