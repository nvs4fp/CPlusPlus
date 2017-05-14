#pragma once
#include "Builder.h"

class Director
{
public:
	Director(AbstractBuilder *m_abstractBuilder);
	~Director();
	void Construct(int a, int b, int c);

private:
	AbstractBuilder *m_absBuilder;
};

