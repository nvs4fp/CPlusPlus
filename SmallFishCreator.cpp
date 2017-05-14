#include "SmallFishCreator.h"
#include "SmallFish.h"


SmallFishCreator::SmallFishCreator(string name, double distance) : FishFactory(name, distance)
{
}


SmallFishCreator::~SmallFishCreator()
{
}

Fish* SmallFishCreator::Create()
{
	Fish* temp = nullptr;
	temp = new SmallFish(name, distance);
	return temp;
}

