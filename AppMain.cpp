#include"Bird.h"
#include"FlyBird.h"
#include"SwimmingBird.h"
#include<stdlib.h>

Bird *BirdFectory(string name, double distance,int type);

void main()
{
	FlyBird *b1 = (FlyBird*)BirdFectory("DaYan",100.0,0);
	b1->WhoAmI();
	b1->ICan();

	SwimmingBird *b2 =(SwimmingBird*)BirdFectory("YuanYang",3.0,1);
	b2->WhoAmI();
	b2->ICan();
	system("PAUSE");
			
}

Bird* BirdFectory(string name, double distance, int type)
{
	if (type == 0)
	{
		return new FlyBird(name, distance);
	}
	else
	{
		return new SwimmingBird(name, distance);
	}
}