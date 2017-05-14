#pragma once
#include "Fish.h"
class MagicFish :
	public Fish
{
public:
	MagicFish(string name, double distance);
	~MagicFish();

public:
	void WhoAmI();
private:
	double distance;
};

