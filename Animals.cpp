#include "Animals.h"
#include <iostream>
using namespace std;

CanFlyBird::CanFlyBird()
{
}


CanFlyBird::~CanFlyBird()
{
}

void CanFlyBird::Sing()
{
	cout << "I can fly and sing, and my sing is very sound."<< endl;
}


CanRunBird::CanRunBird()
{
}


CanRunBird::~CanRunBird()
{
}

void CanRunBird::Sing()
{
	cout << "I can run and sing, and my sing is very boring." << endl;
}


RiverFish::RiverFish()
{
}

RiverFish::~RiverFish()
{
}

void RiverFish::Swimming()
{
	cout << "I can Swimming in the river." << endl;
}

SeaFish::SeaFish()
{
}

SeaFish::~SeaFish()
{
}

void SeaFish::Swimming()
{
	cout << "I can Swimming in the sea." << endl;
}
