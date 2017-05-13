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
	switch (type)
	{
	case SWIMMING_BIRD:
		return new FlyBird(name, distance);
		break;
	case FLY_BIRD:
		return new SwimmingBird(name, distance);
		break;
	default:
		return NULL;
	}
}