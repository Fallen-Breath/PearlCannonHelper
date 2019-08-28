#pragma once

#include "vec3d.h"

namespace TIS360FTLData
{
	const int maxUnit = 20;
	const double scrX = 78.0625, scrZ = 43.0625;
	const vec3d scrPos[2] = {vec3d(78.0625, 182.357766, 43.0625), vec3d(78.0625, 182.345698, 43.0625)};
	const vec3d motion[2] = {vec3d(0, 0.206522, 0), vec3d(0, 0.174457, 0)};
	const vec3d thrust[2] = {vec3d(12.05429788, 0.1321336, 12.05429788), vec3d(12.05083642, -0.0447100, 12.05083642)};
	const double sign1[4][3] = {{+1, +1, -1}, {-1, +1, +1}, {-1, +1, -1}, {-1, +1, -1}};
	const double sign2[4][3] = {{+1, +1, +1}, {+1, +1, +1}, {+1, +1, -1}, {-1, +1, +1}};

	vec3d getThrust(int, int, int, int);
};