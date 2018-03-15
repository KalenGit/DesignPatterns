#include"ConcreteFactoryB.h"
#include"ConcreteProductB.h"

ConcreteFactoryB::ConcreteFactoryB()
{
}

ConcreteFactoryB::~ConcreteFactoryB()
{
}

Product* ConcreteFactoryB::factoryMethod()
{
	return new ConcreteProductB();
}