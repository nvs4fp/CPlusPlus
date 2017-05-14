#pragma once
#include "AbstractBirdProduct.h"
#include "AbstractFishProduct.h"

//Bird class define
//--------------------------------------------
//Fly bird
class CanFlyBird: public AbstractBirdProduct
{
public:
	CanFlyBird();
	~CanFlyBird();
public:
	void Sing();
};

//--------------------------------------------
//Run bird
class CanRunBird : public AbstractBirdProduct
{
public:
	CanRunBird();
	~CanRunBird();
public:
	void Sing();
};


//Fish class define
//--------------------------------------------
//River Fish
class RiverFish : public AbstractFishProduct
{
public:
	RiverFish();
	~RiverFish();
public:
	void Swimming();
};

//--------------------------------------------
//Sea Fish
class SeaFish : public AbstractFishProduct
{
public:
	SeaFish();
	~SeaFish();
public:
	void Swimming();
};

