#ifndef PRODUCT_H_
#define PRODUCT_H_

class Product
{
public:
	Product();
	virtual ~Product();
	virtual void productMethod() = 0;
};


#endif