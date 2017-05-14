#pragma once
#include "Fish.h"
class SmallFish :
	public Fish
{
public:
	SmallFish(string name, double distance);
	~SmallFish();
	void WhoAmI();
protected:
	double distance;
};

