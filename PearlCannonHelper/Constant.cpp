#include "Constant.h"


const QString Constant::iniFileName = "./PearlCannonHelper.ini";
const vec3d Constant::delta_position[2] = {
	vec3d(0, 49.345698, 0),  // pitch == 0
	vec3d(0, 49.357766, 0)  // pitch == 1
};
const vec3d Constant::motion[2] = {
	vec3d(0, 0.174457, 0),  // pitch == 0
	vec3d(0, 0.206522, 0)  // pitch == 1
};
const vec3d Constant::thrust[2] = {
	vec3d(0.602541821, -0.0022355, 0.602541821),  // pitch == 0
	vec3d(0.602714894, 0.00660668, 0.602714894)  // pitch == 1
};
// for left size (light gray)
// rotation direction xyz
const double Constant::sign_l[4][4][3] = {
	// Rotation: None
	{
		{+1, 1, +1}, // 00
		{-1, 1, -1}, // 01
		{+1, 1, -1}, // 10
		{+1, 1, -1}  // 11
	},
	// Rotation: CW_90
	{
		{-1, 1, +1}, // 00
		{+1, 1, -1}, // 01
		{+1, 1, +1}, // 10
		{+1, 1, +1}  // 11
	},
	// Rotation: CW_180
	{
		{-1, 1, -1}, // 00
		{+1, 1, +1}, // 01
		{-1, 1, +1}, // 10
		{-1, 1, +1}  // 11
	},
	// Rotation: CCW_90
	{
		{+1, 1, -1}, // 00
		{-1, 1, +1}, // 01
		{-1, 1, -1}, // 10
		{-1, 1, -1}  // 11
	}
};

// for left size (dark gray)
// rotation direction xyz
const double Constant::sign_r[4][4][3] = {
	// Rotation: None
	{
		{-1, 1, +1}, // 00
		{-1, 1, +1}, // 01
		{+1, 1, +1}, // 10
		{-1, 1, -1}  // 11
	},
	// Rotation: CW_90
	{
		{-1, 1, -1}, // 00
		{-1, 1, -1}, // 01
		{-1, 1, +1}, // 10
		{+1, 1, -1}  // 11
	},
	// Rotation: CW_180
	{
		{+1, 1, -1}, // 00
		{+1, 1, -1}, // 01
		{-1, 1, -1}, // 10
		{+1, 1, +1}  // 11
	},
	// Rotation: CCW_90
	{
		{+1, 1, +1}, // 00
		{+1, 1, +1}, // 01
		{+1, 1, -1}, // 10
		{-1, 1, +1}  // 11
	}
};
