#ifndef FACTORY_H_
#define FACTORY_H_

#include"Product.h"
#include<string>

class Factory
{
public:
	Factory();
	virtual ~Factory();
	virtual Product* factoryMethod()=0;
};

#endif