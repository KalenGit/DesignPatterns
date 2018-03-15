#ifndef CONCRETEFACTORYB_H_
#define CONCRETEFACTORYB_H_

#include"Factory.h"

class ConcreteFactoryB:public Factory
{
public:
	ConcreteFactoryB();
	~ConcreteFactoryB();
	Product* factoryMethod();

};

#endif
