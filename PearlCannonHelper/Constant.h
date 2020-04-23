#pragma once

#include "vec3d.h"
#include <QString>

class Constant
{
public:
	static const QString iniFileName;
	static const int maxTNT = 7 * 260;
	static const vec3d delta_position[2];
	static const vec3d motion[2];
	static const vec3d thrust[2];
	static const double sign_l[4][4][3];
	static const double sign_r[4][4][3];
	double srcX, srcZ, floorY;
};