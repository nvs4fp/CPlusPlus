#include"Bird.h"
#include"FlyBird.h"
#include"SwimmingBird.h"
#include "BirdFactory.h"

void main()
{
	FlyBird *b1 = (FlyBird*)BirdFactory::Create("DaYan", 100.0, FLY_BIRD);
	b1->WhoAmI();
	b1->ICan();

	SwimmingBird *b2 = (SwimmingBird*)BirdFactory::Create("YuanYang", 3.0, SWIMMING_BIRD);
	b2->WhoAmI();
	b2->ICan();
	system("PAUSE");
			
}