#pragma once
#include "FishFactory.h"
class MagicFishCreator :
	public FishFactory
{
public:
	MagicFishCreator(string name, double distance);
	~MagicFishCreator();
public:
	Fish* Create();
};

