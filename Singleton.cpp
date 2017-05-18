#include "Singleton.h"
#include <iostream>

using namespace std;

Singleton::Singleton()
{
    m_count++;
}

Singleton::~Singleton()
{
}

// override copy construct to prevent copy operation
Singleton::Singleton(const Singleton&)
{
}


// override assigned construct to prevent assign copy operation
Singleton& Singleton::operator=(const Singleton&)
{
    return *m_instance;
}

// Initialize static member attribute
Singleton* Singleton::m_instance = new Singleton();
int Singleton::m_count = 0;

Singleton* Singleton::getInstance()
{
    if (m_instance == nullptr)
    {
        return new Singleton();
    }
    else
    {
        return m_instance;
    }
}

void Singleton::ShowMyself()
{
    cout << m_count << endl;
    cout << m_instance << endl;
}
