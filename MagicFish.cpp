#include "MagicFish.h"



MagicFish::MagicFish(string name, double distance) :Fish(name)
{
	this->distance = distance;
}


MagicFish::~MagicFish()
{
}


void MagicFish::WhoAmI()
{
	cout << "I am a magic fish." << endl;
}