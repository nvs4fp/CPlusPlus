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
#include "AbstractBirdProduct.h"
#include "Animals.h"
#include "BigFish.h"
#include "BigFishCreator.h"
#include "Bird.h"
#include "BirdFactory.h"
#include "FishBirdFactory.h"
#include "FishFactory.h"
#include "FlyBird.h"
#include "MagicFish.h"
#include "MagicFishCreator.h"
#include "SmallFish.h"
#include "SmallFishCreator.h"
#include "SwimmingBird.h"

#include "Director.h"
#include "Product.h"
#include "Builder.h"


void bird_create_pattern();			//Using simple factory pattern to create bird object
void fish_create_pattern();			//Using factory pattern to create fish object
void fish_bird_create_pattern();	//Using abstract factory pattern to create fish object
void product_director_builder();	//Using Builder pattern to create different products
void main()
{
	//bird_create_pattern();
	//fish_create_pattern();
	//fish_bird_create_pattern();
	product_director_builder();

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

void fish_bird_create_pattern()
{
	FishBirdFactory *fp = nullptr;
	fp = new AFishBirdFactory();
	AbstractBirdProduct *bdp = fp->BirdCreater();
	AbstractFishProduct	*fdp = fp->FishCreater();
	bdp->Sing();
	fdp->Swimming();
	delete bdp;
	delete fdp;
	delete fp;

	fp = new BFishBirdFactory();
	bdp = fp->BirdCreater();
	fdp = fp->FishCreater();

	bdp->Sing();
	fdp->Swimming();

	delete bdp;
	delete fdp;
	delete fp;

}

void product_director_builder()
{
	AbstractBuilder* absBuilder = nullptr;
	absBuilder = new Builder();

	Director *director = nullptr;
	director = new Director(absBuilder);

	director->Construct(1, 2, 3);
	absBuilder->GetProduct()->Show();

	director->Construct(3, 2, 1);
	absBuilder->GetProduct()->Show();

	delete absBuilder;
	delete director;
}