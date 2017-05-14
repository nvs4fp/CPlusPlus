#include "MagicFishCreator.h"
#include "MagicFish.h"


MagicFishCreator::MagicFishCreator(string name, double distance) : FishFactory(name, distance)
{
	this->distance = distance;
}


MagicFishCreator::~MagicFishCreator()
{
}

Fish* MagicFishCreator::Create()
{
	Fish* temp = nullptr;
	temp = new MagicFish(name, distance);
	return temp;
}


