#include "FlyBird.h"
#include <sstream> 
using namespace std;

FlyBird::FlyBird(string name, double flyDistance):Bird(name)
{
	this->flyDistance = flyDistance;
}


void FlyBird::ICan()
{
	cout << "I can fly "<< this->flyDistance <<" kilometres long!"<< endl << endl;
}


FlyBird::~FlyBird()
{

}
