#pragma once
#include <QString>
#include "vec3d.h"

class Setting
{
public:
	// litematica rotation
	static int rotation;

	Setting();
	Setting(int, int, int, int);
	Setting(QString);
	~Setting();
	QString toString();
	vec3d getThrust();

	int amount_l, amount_r, direction, pitch;
};

