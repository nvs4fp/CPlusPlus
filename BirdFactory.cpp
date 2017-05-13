//////////////////////////////////////////////////////////////
//BirdFactory.cpp
//Description: Using simple factory pattern to create birds.
//Create: 13-May-2017
//Author: Levi Li
//History:
//Data			Name			Description
//13-May-2017	Levi Li			Initial
//////////////////////////////////////////////////////////////
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

//Simple factory pattern
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