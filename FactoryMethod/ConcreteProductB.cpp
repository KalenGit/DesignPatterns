#include"ConcreteProductB.h"
#include<iostream>

ConcreteProductB::ConcreteProductB()
{
}

ConcreteProductB::~ConcreteProductB()
{
}

void ConcreteProductB::productMethod()
{
	using std::cout;
	using std::endl;
	cout << "调用产品B的方法。" << endl;
}