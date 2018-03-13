/*
 * Product.h
 *
 *  Created on: 2018年3月13日
 *      Author: haward
 *      描述:角色，抽象产品
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_

class Product {
public:
	Product();
	virtual ~Product();
	virtual void productName()=0;  //纯虚函数，代表是抽象类
};

#endif /* PRODUCT_H_ */
