#include"Factory.h"
#include"ConcreteProductA.h"
#include"ConcreteProductB.h"
#include"Product.h"

Factory::Factory()
{

}

Factory::~Factory()
{

}

Product* Factory::factoryMethod(std::string args)
{

	if(args=="A")
		return new ConcreteProductA();
	else
		return new ConcreteProductB();
}
