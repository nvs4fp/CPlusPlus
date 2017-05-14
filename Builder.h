#pragma once
#include "Product.h"

class AbstractBuilder
{
public:
	AbstractBuilder();
	~AbstractBuilder();
public:
	virtual void BuilderPartA(int value) = 0;
	virtual void BuilderPartB(int value) = 0;
	virtual void BuilderPartC(int value) = 0;
	virtual void Construct() = 0;
	virtual Product* GetProduct() = 0;
};

class Builder :public AbstractBuilder
{
public:
	Builder();
	~Builder();
public:
	void BuilderPartA(int value);
	void BuilderPartB(int value);
	void BuilderPartC(int value);
	void Construct();
	Product* GetProduct();
private:
	Product *curProduct;
};

