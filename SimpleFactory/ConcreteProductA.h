/*
 * ConcreteProductA.h
 *
 *  Created on: 2018��3��13��
 *      Author: admin
 */

#ifndef CONCRETEPRODUCTA_H_
#define CONCRETEPRODUCTA_H_

#include"Product.h"
#include<iostream>
using namespace std;

//����ļ̳з�ʽΪprivatedʱ�򣬻���Ĺ��г�Ա�ͱ�����Ա��
//��˽�г�Ա����ݳ������������У��������˽�г�Ա���������в��ɷ��ʡ�

class ConcreteProductA : public Product{
public:
	ConcreteProductA();
	virtual ~ConcreteProductA();
	void productName();
};

#endif /* CONCRETEPRODUCTA_H_ */
