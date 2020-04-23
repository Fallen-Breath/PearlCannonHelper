#pragma once

#include <vec3d.h>

class Pearl
{
private:
	vec3d position, momentum;

public:
	Pearl(vec3d, vec3d);
	double getX();
	double getY();
	double getZ();
	double getMx();
	double getMy();
	double getMz();
	vec3d getPosition();
	vec3d getMomentum();
	void accelerate(vec3d);
	void tick(int);
	void tick();
};

