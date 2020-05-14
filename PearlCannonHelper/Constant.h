#pragma once

#include "vec3d.h"
#include <QString>

class Constant
{
public:
	static const QString iniFileName;
	static const int bigArrayTNT = 260;
	static const int maxBigArrayCount = 7;
	static const int maxTNT = bigArrayTNT * maxBigArrayCount;
	static const int max10Count = bigArrayTNT / 10;
	static const int max1Count = 10;
	static const vec3d delta_position[2];
	static const vec3d motion[2];
	static const vec3d thrust[2];
	static const double sign_l[4][4][3];
	static const double sign_r[4][4][3];
	double srcX, srcZ, floorY;
};