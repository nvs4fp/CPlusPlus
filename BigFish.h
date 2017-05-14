#pragma once
#include "Fish.h"
class BigFish :
	public Fish
{
public:
	BigFish(string name, double distance);
	~BigFish();
	void WhoAmI();
private:
	double distance;
};

