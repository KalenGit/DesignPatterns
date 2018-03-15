#include"ConcreteFactoryA.h"
#include"ConcreteFactoryB.h"
#include"ConcreteProductA.h"
#include"ConcreteProductB.h"
/***
模式结构
工厂方法模式包含如下角色：
Product：抽象产品
ConcreteProduct：具体产品
Factory：抽象工厂
ConcreteFactory：具体工厂


Product：定义工厂方法所创建对象的接口
ConcreteProduct：实现Product接口
Factory：声明工厂方法，返回一个Product类型对象。 Factory也可以定义一个工厂方法的缺省实现，返回一个缺省ConcreteProduct对象
Concrete Factory：重定义工厂方法，返回一个ConcreteProduct实例



**/
int main()
{
	//类似virtual Product* factoryMethod()=0;的是纯虚函数，不能使用，只能使用它的子类
	ConcreteFactoryA factoryA= ConcreteFactoryA();
	Product *product = factoryA.factoryMethod();
	product->productMethod();
	delete product;
	while (1);
	return 0;
}