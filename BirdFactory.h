#pragma once
#include <sstream>
#include "Bird.h"
using namespace std;
class BirdFactory
{
public:
	BirdFactory();
	~BirdFactory();
	static Bird* Create(string name, double distance, int type);
};

