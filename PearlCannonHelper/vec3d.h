#pragma once
#include <QString>


class vec3d
{
public:
	double x, y, z;
	vec3d();
	vec3d(double, double, double);
	double distance(const vec3d &);
	double angle();
	QString toString();
	friend vec3d operator + (const vec3d &, const vec3d &);
	friend vec3d & operator += (vec3d &, const vec3d &);
	friend vec3d operator - (const vec3d &, const vec3d &);
	friend vec3d & operator -= (vec3d &, const vec3d &);
	friend vec3d operator * (const vec3d &, double);
	friend vec3d & operator *= (vec3d &, double);
};

