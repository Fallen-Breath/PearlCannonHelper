#include "TIS360FTLData.h"

namespace TIS360FTLData
{
	vec3d getThrust(int pitch, int amount1, int yaw, int amount2)
	{
		vec3d ret = thrust[pitch];
		ret.x *= amount1 * sign1[yaw][0] + amount2 * sign2[yaw][0];
		ret.y *= amount1 * sign1[yaw][1] + amount2 * sign2[yaw][1];
		ret.z *= amount1 * sign1[yaw][2] + amount2 * sign2[yaw][2];
		return ret; 
	}
}