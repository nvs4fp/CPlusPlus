#include "Product.h"
#include <iostream>
using namespace std;

Product::Product()
{
}


Product::~Product()
{
}

void Product::Show()
{
	cout << "m_a=" << m_a << " m_b=" << m_b << " m_c=" << m_c << endl;
}

void Product::SetA(int value)
{
	this->m_a = value;
}

void Product::SetB(int value)
{
	this->m_b = value;
}

void Product::SetC(int value)
{
	this->m_c = value;
}
