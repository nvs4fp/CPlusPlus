#pragma once
class Singleton
{
public:
    static Singleton* getInstance();
    void ShowMyself();

private:
    Singleton();
    ~Singleton();
    Singleton(const Singleton&);
    Singleton& operator=(const Singleton&);
    static Singleton* m_instance;
    static int m_count;
};


/* sample
void SingletonUseMehod();
void main()
{
Singleton* singleton1 = Singleton::getInstance();
singleton1->ShowMyself();
SingletonUseMehod();
Singleton* singleton2 = Singleton::getInstance();
singleton2->ShowMyself();

if (singleton1==singleton2)
{
cout <<"singleton1 == singleton2" << endl;
}
system("PAUSE");
}
void SingletonUseMehod()
{
Singleton* singleton3 = Singleton::getInstance();
singleton3->ShowMyself();
}


*/