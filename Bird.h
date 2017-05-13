#pragma once
#include<iostream>
using namespace std;
class Bird
{
public:
	Bird(string name);
	~Bird();
	void WhoAmI();
private:
	string name;
};

