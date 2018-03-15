#include"ConcreteFactoryA.h"
#include"ConcreteProductA.h"

ConcreteFactoryA::ConcreteFactoryA()
{
}

ConcreteFactoryA::~ConcreteFactoryA()
{
}

Product* ConcreteFactoryA::factoryMethod()
{
	return new ConcreteProductA();
}