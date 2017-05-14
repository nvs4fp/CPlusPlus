#include "Director.h"

Director::Director(AbstractBuilder* m_abstractBuilder)
{
	m_absBuilder = m_abstractBuilder;
}


Director::~Director()
{
}

void Director::Construct(int a, int b, int c)
{	
	m_absBuilder->Construct();
	m_absBuilder->BuilderPartA(a);
	m_absBuilder->BuilderPartB(b);
	m_absBuilder->BuilderPartC(c);

}
