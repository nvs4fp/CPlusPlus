//Description
//Author: Levi Li
#include "SwimmingBird.h"
#include<iostream>
#include<sstream>

SwimmingBird::SwimmingBird(string name, double swmDistance):Bird(name)
{
	this->swmDistance = swmDistance;
}


SwimmingBird::~SwimmingBird()
{
	// ToDo: distory new located value;
}


void SwimmingBird::ICan()
{
	cout <<  "I can Swimming in " << this->swmDistance << " metres deep river!" << endl << endl;
}