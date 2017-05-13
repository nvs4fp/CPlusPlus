#pragma once
#include "Bird.h"
class SwimmingBird :
	public Bird
{
public:
	SwimmingBird(string name, double flyDistance);
	void ICan();
	~SwimmingBird();
private:
	double swmDistance;
};

