#ifndef CONCRETEFACTORY_H_
#define CONCRETEFACTORY_H_

#include"Factory.h"


class ConcreteFactoryA :public Factory
{
public:
	ConcreteFactoryA();
	~ConcreteFactoryA();
	Product* factoryMethod();
};

#endif
