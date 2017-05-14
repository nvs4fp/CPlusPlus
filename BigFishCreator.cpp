#include "BigFishCreator.h"
#include "BigFish.h"



BigFishCreator::BigFishCreator(string name, double distance):FishFactory(name, distance)
{
}


BigFishCreator::~BigFishCreator()
{
}

Fish* BigFishCreator::Create()
{
	Fish* temp = nullptr;
	temp= new BigFish(name, distance);
	return temp;
}


