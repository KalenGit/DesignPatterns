/*
 * ConcreteProductB.h
 *
 *  Created on: 2018Äê3ÔÂ13ÈÕ
 *      Author: admin
 */

#ifndef CONCRETEPRODUCTB_H_
#define CONCRETEPRODUCTB_H_

#include"Product.h"
#include<iostream>
using namespace std;

class ConcreteProductB : public Product{
public:
	ConcreteProductB();
	virtual ~ConcreteProductB();
	void productName();
};

#endif /* CONCRETEPRODUCTB_H_ */
