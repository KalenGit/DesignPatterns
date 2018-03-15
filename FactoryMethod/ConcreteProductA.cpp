#include"ConcreteProductA.h"
#include<iostream>

ConcreteProductA::ConcreteProductA()
{
}

ConcreteProductA::~ConcreteProductA()
{
}

void ConcreteProductA::productMethod()
{
	using std::cout;
	using std::endl;
	cout << "调用产品A的方法。" << endl;
}