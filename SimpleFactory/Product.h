/*
 * Product.h
 *
 *  Created on: 2018��3��13��
 *      Author: haward
 *      ����:��ɫ�������Ʒ
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_

class Product {
public:
	Product();
	virtual ~Product();
	virtual void productName()=0;  //���麯���������ǳ�����
};

#endif /* PRODUCT_H_ */
