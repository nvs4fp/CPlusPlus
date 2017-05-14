#pragma once
class Product
{
public:
	Product();
	~Product();
public:
	void SetA(int value);
	void SetB(int value);
	void SetC(int value);
	void Show();
private:
	int m_a;
	int m_b;
	int m_c;
};

