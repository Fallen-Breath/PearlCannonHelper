#include "vec3d.h"
#include <cmath>

vec3d::vec3d(): vec3d(0, 0, 0)
{
}

vec3d::vec3d(double t_x, double t_y, double t_z): x(t_x), y(t_y), z(t_z)
{
}

double vec3d::distance(const vec3d &a)
{
	double dx = x - a.x;
	double dy = y - a.y;
	double dz = z - a.z;
	return std::sqrt(dx * dx + dy * dy + dz * dz);
}

double vec3d::angle()
{
	return atan2(z, x);
}

vec3d operator + (const vec3d &a, const vec3d &b)
{
	return vec3d(a.x + b.x, a.y + b.y, a.z + b.z);
}
vec3d & operator += (vec3d &a, const vec3d &b)
{
	a = a + b;
	return a;
}

vec3d operator - (const vec3d &a, const vec3d &b)
{
	return vec3d(a.x - b.x, a.y - b.y, a.z - b.z);
}
vec3d & operator -= (vec3d &a, const vec3d &b)
{
	a = a - b;
	return a;
}

vec3d operator * (const vec3d &a, double b)
{
	return vec3d(a.x * b, a.y * b, a.z * b);
}
vec3d & operator *= (vec3d &a, double b)
{
	a = a * b;
	return a;
}

QString vec3d::toString()
{
	return "(" + QString::number(x, 'f', 4) + ", " + QString::number(y, 'f', 4) + ", " + QString::number(z, 'f', 4) + ")";
}