#include "Pearl.h"

Pearl::Pearl(vec3d t_p, vec3d t_m) :position(t_p), momentum(t_m)
{
}

double Pearl::getX()
{
	return position.x;
}
double Pearl::getY()
{
	return position.y;
}
double Pearl::getZ()
{
	return position.z;
}
double Pearl::getMx()
{
	return momentum.x;
}
double Pearl::getMy()
{
	return momentum.y;
}
double Pearl::getMz()
{
	return momentum.z;
}
vec3d Pearl::getPosition()
{
	return position;
}
vec3d Pearl::getMomentum()
{
	return momentum;
}

void Pearl::accelerate(vec3d thrust)
{
	momentum += thrust;
}
void Pearl::tick(int cnt)
{
	for (int i = 0; i < cnt; i++)
	{
		position += momentum;
		momentum *= 0.99;
		momentum.y -= 0.03;
	}
}
void Pearl::tick()
{
	tick(1);
}
