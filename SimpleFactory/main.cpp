#include"Factory.h"
#include<iostream>
using namespace std;

int main()
{
	std::string args="A";
	Factory factory;
	Product* product=factory.factoryMethod(args);
	product->productName();
	delete product;
	system("pause");
	return 0;
}
