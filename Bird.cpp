#include "Bird.h"
#include<sstream>
Bird::Bird(string name)
{
	this->name = name;
}


void Bird::WhoAmI()
{
	cout << "I am a bird! My name is:" << this->name << endl;
}

Bird::~Bird()
{
}
