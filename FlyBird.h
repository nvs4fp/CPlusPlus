#pragma once
#include "Bird.h"
class FlyBird :
	public Bird
{
public:
	FlyBird(string name, double flyDistance);
	void ICan();
	~FlyBird();
private:
	double flyDistance;
};

