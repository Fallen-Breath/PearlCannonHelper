#pragma once

#include "vec3d.h"

class FTLData
{
public:
	static const int maxUnit = 20;
	static const vec3d motion[2];
	static const vec3d thrust[2];
	static const double sign1[4][3];
	static const double sign2[4][3];
	double srcX, srcZ, floorY;

	FTLData();
	vec3d getSourcePos(int index);
	vec3d getThrust(int, int, int, int);
};