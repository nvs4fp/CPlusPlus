#include "SmallFish.h"



SmallFish::SmallFish(string name, double distance):Fish(name)
{
	this->distance = distance;
}


SmallFish::~SmallFish()
{
}

void SmallFish::WhoAmI()
{
	cout << "I am a asmall fish." << endl;
}
