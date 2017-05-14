#pragma once
#include "FishFactory.h"
#include <sstream>
using namespace std;

class BigFishCreator :
	public FishFactory
{
public:
	BigFishCreator(string name, double distance);
	~BigFishCreator();

public:
	Fish * Create();
};

