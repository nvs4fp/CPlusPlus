#include "Builder.h"



AbstractBuilder::AbstractBuilder()
{
}


AbstractBuilder::~AbstractBuilder()
{
}

Builder::Builder()
{
}

Builder::~Builder()
{
}

void Builder::BuilderPartA(int value)
{
	curProduct->SetA(value);
}


void Builder::BuilderPartB(int value)
{
	curProduct->SetB(value);
}


void Builder::BuilderPartC(int value)
{
	curProduct->SetC(value);
}

Product* Builder::GetProduct()
{
	return curProduct;
}

void Builder::Construct()
{
	curProduct = new Product;
}