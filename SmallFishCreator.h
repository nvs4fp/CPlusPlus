#pragma once
#include "FishFactory.h"

class SmallFishCreator :
	public FishFactory
{
public:
	SmallFishCreator(string name, double distance);
	~SmallFishCreator();
public:
	Fish * Create();
};

