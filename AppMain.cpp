//////////////////////////////////////////////////////////////////////////////////////////
//AppMain.cpp
//Description: App entrance
//Create: 13-May-2017
//Author: Levi Li
//History:
//Data			Name			Description
//13-May-2017	Levi Li			Initial
//13-May-2017	Levi Li			Add fish create related class using factory pattern
//////////////////////////////////////////////////////////////////////////////////////////
#include "BigFish.h"
#include "BigFishCreator.h"
#include "Bird.h"
#include "BirdFactory.h"
#include "FishFactory.h"
#include "FlyBird.h"
#include "MagicFish.h"
#include "MagicFishCreator.h"
#include "SmallFish.h"
#include "SmallFishCreator.h"
#include "SwimmingBird.h"

void bird_create_pattern();//Using simple factory pattern to create bird object
void fish_create_pattern();//Using factory pattern to create fish object

void main()
{
	bird_create_pattern();
	fish_create_pattern();

	system("PAUSE");
}

//Using simple factory pattern to create bird object
void bird_create_pattern()
{
	FlyBird *b1 = (FlyBird*)BirdFactory::Create("DaYan", 100.0, FLY_BIRD);
	b1->WhoAmI();
	b1->ICan();

	SwimmingBird *b2 = (SwimmingBird*)BirdFactory::Create("YuanYang", 3.0, SWIMMING_BIRD);
	b2->WhoAmI();
	b2->ICan();
}

//Using factory pattern to create fish object
void fish_create_pattern()
{
	FishFactory *fp = nullptr;
	fp = new SmallFishCreator("Small", 10.0);
	Fish*fash = fp->Create();
	fash->WhoAmI();
	delete  fp;
	delete fash;
	fp = nullptr;
	fash = nullptr;

	fp = new BigFishCreator("Big", 10.0);
	fash = fp->Create();
	fash->WhoAmI();

	delete  fp;
	delete fash;
	fp = nullptr;
	fash = nullptr;

	fp = new MagicFishCreator("Magic", 10.0);
	fash = fp->Create();
	fash->WhoAmI();

	delete  fp;
	delete fash;
	fp = nullptr;
	fash = nullptr;
}