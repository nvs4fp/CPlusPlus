#include "BigFish.h"



BigFish::BigFish(string name, double distance):Fish(name)
{
	this->distance = distance;
}


BigFish::~BigFish()
{
}


void BigFish::WhoAmI()
{
	cout << "I am a big fish." << endl;
}
