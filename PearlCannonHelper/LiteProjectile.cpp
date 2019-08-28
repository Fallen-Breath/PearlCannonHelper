#include "LiteProjectile.h"

LiteProjectile::LiteProjectile(vec3d t_p, vec3d t_m) :position(t_p), momentum(t_m)
{
}

double LiteProjectile::getX()
{
	return position.x;
}
double LiteProjectile::getY()
{
	return position.y;
}
double LiteProjectile::getZ()
{
	return position.z;
}
double LiteProjectile::getMx()
{
	return momentum.x;
}
double LiteProjectile::getMy()
{
	return momentum.y;
}
double LiteProjectile::getMz()
{
	return momentum.z;
}
vec3d LiteProjectile::getPosition()
{
	return position;
}
vec3d LiteProjectile::getMomentum()
{
	return momentum;
}

void LiteProjectile::accelerate(vec3d thrust)
{
	momentum += thrust;
}
void LiteProjectile::tick(int cnt)
{
	for (int i = 0; i < cnt; i++)
	{
		position += momentum;
		momentum *= 0.99;
		momentum.y += -0.03;
	}
}
void LiteProjectile::tick()
{
	tick(1);
}
