#include "FishBirdFactory.h"
#include "Animals.h"



FishBirdFactory::FishBirdFactory()
{
}


FishBirdFactory::~FishBirdFactory()
{
}



//--------------------------------------------------------------
AFishBirdFactory::AFishBirdFactory()
{

}


AFishBirdFactory::~AFishBirdFactory()
{

}

AbstractBirdProduct* AFishBirdFactory::BirdCreater()
{
	AbstractBirdProduct* temp = nullptr;
	temp = new CanFlyBird();
	return temp;
}

AbstractFishProduct* AFishBirdFactory::FishCreater()
{
	AbstractFishProduct* temp = nullptr;
	temp = new RiverFish();
	return temp;
}



//--------------------------------------------------------------
BFishBirdFactory::BFishBirdFactory()
{

}


BFishBirdFactory::~BFishBirdFactory()
{

}

AbstractFishProduct* BFishBirdFactory::FishCreater()
{
	AbstractFishProduct* temp = nullptr;
	temp = new SeaFish();
	return temp;

}

AbstractBirdProduct* BFishBirdFactory::BirdCreater()
{
	AbstractBirdProduct* temp = nullptr;
	temp = new CanRunBird();
	return temp;
}
