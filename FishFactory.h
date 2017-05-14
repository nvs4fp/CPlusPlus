#pragma once
#include <sstream>
#include "Fish.h"
using namespace std;

class FishFactory
{
public:
	FishFactory(string name, double distance);
	~FishFactory();
	virtual Fish* Create() = 0;

public:
	string name;
	double distance;
};

