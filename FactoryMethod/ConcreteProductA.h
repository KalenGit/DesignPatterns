#ifndef CONCRETEPRODUCTA_H_
#define CONCRETEPRODUCTA_H_
#include"Product.h"

class ConcreteProductA :public Product
{
public:
	ConcreteProductA();
	virtual ~ConcreteProductA();
	void productMethod();
};

#endif
