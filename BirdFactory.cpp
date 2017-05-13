#include "BirdFactory.h"
#include "Bird.h"
#include "FlyBird.h"
#include "SwimmingBird.h"



BirdFactory::BirdFactory()
{
}


BirdFactory::~BirdFactory()
{
}

Bird* BirdFactory::Create(string name, double distance, int type)
{
	if (type == 0)
	{
		return new FlyBird(name, distance);
	}
	else
	{
		return new SwimmingBird(name, distance);
	}
	return NULL;
}