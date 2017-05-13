//////////////////////////////////////////////////////////////
//BirdFactory.h
//Description: Using simple factory pattern to create birds.
//Create: 13-May-2017
//Author: Levi Li
//History:
//Data			Name			Description
//13-May-2017	Levi Li			Initial
//////////////////////////////////////////////////////////////
#pragma once
#include <sstream>
#include "Bird.h"
using namespace std;
enum BuirdType
{
	FLY_BIRD=0,
	SWIMMING_BIRD,
	BIRD_TOTAL=3
};
class BirdFactory
{
public:
	BirdFactory();
	~BirdFactory();
	static Bird* Create(string name, double distance, int type);
};

