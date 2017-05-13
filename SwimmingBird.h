#pragma once
#include "Bird.h"
class SwimmingBird :
	public Bird
{
public:
	SwimmingBird(string name, double swmDistance);
	void ICan();
	~SwimmingBird();
private:
	double swmDistance;
};

