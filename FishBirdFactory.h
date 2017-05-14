#pragma once
#include "AbstractBirdProduct.h"
#include "AbstractFishProduct.h"

class FishBirdFactory
{
public:
	FishBirdFactory();
	~FishBirdFactory();
public:
	virtual AbstractBirdProduct* BirdCreater() = 0;
	virtual AbstractFishProduct* FishCreater() = 0;

};


class AFishBirdFactory : public FishBirdFactory
{
public:
	AFishBirdFactory();
	~AFishBirdFactory();
public:
	AbstractBirdProduct* BirdCreater();
	AbstractFishProduct* FishCreater();

};


class BFishBirdFactory : public FishBirdFactory
{
public:
	BFishBirdFactory();
	~BFishBirdFactory();
public:
	AbstractBirdProduct* BirdCreater();
	AbstractFishProduct* FishCreater();

};