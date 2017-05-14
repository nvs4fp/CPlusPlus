#pragma once
#include<iostream>
using namespace std;
class Fish
{
public:
	Fish(string name);
	~Fish();
	virtual void WhoAmI()=0;
private:
	string name;
};

