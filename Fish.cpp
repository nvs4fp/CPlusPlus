#include "Fish.h"
#include<sstream>
Fish::Fish(string name)
{
	this->name = name;
}


void Fish::WhoAmI()
{
	cout << "I am fish base class."  << endl;
}

Fish::~Fish()
{

}
