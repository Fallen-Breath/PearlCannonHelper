#include "FTLData.h"


const vec3d FTLData::motion[2] = { vec3d(0, 0.206522, 0), vec3d(0, 0.174457, 0) };
const vec3d FTLData::thrust[2] = { vec3d(12.05429788, 0.1321336, 12.05429788), vec3d(12.05083642, -0.0447100, 12.05083642) };
const double FTLData::sign1[4][3] = { {+1, +1, -1}, {-1, +1, +1}, {-1, +1, -1}, {-1, +1, -1} };
const double FTLData::sign2[4][3] = { {+1, +1, +1}, {+1, +1, +1}, {+1, +1, -1}, {-1, +1, +1} };

FTLData::FTLData()
{
	this->srcX = 78.0625, this->srcZ = 43.0625, this->floorY = 141;
}

vec3d FTLData::getSourcePos(int index)
{
	vec3d srcPos[2] = {vec3d(this->srcX, floorY + 41.357766, 43.0625), vec3d(srcX, floorY + 41.345698, srcZ)};
	return srcPos[index];
}

vec3d FTLData::getThrust(int pitch, int amount1, int yaw, int amount2)
{
	vec3d ret = thrust[pitch];
	ret.x *= amount1 * sign1[yaw][0] + amount2 * sign2[yaw][0];
	ret.y *= amount1 * sign1[yaw][1] + amount2 * sign2[yaw][1];
	ret.z *= amount1 * sign1[yaw][2] + amount2 * sign2[yaw][2];
	return ret; 
}