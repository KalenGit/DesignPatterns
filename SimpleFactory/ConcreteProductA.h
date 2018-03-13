/*
 * ConcreteProductA.h
 *
 *  Created on: 2018年3月13日
 *      Author: admin
 */

#ifndef CONCRETEPRODUCTA_H_
#define CONCRETEPRODUCTA_H_

#include"Product.h"
#include<iostream>
using namespace std;

//当类的继承方式为privated时候，基类的公有成员和保护成员都
//以私有成员的身份出现在派生类中，而基类的私有成员在派生类中不可访问。

class ConcreteProductA : public Product{
public:
	ConcreteProductA();
	virtual ~ConcreteProductA();
	void productName();
};

#endif /* CONCRETEPRODUCTA_H_ */
