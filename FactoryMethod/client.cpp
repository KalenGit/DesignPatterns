#include"ConcreteFactoryA.h"
#include"ConcreteFactoryB.h"
#include"ConcreteProductA.h"
#include"ConcreteProductB.h"
/***
ģʽ�ṹ
��������ģʽ�������½�ɫ��
Product�������Ʒ
ConcreteProduct�������Ʒ
Factory�����󹤳�
ConcreteFactory�����幤��


Product�����幤����������������Ľӿ�
ConcreteProduct��ʵ��Product�ӿ�
Factory��������������������һ��Product���Ͷ��� FactoryҲ���Զ���һ������������ȱʡʵ�֣�����һ��ȱʡConcreteProduct����
Concrete Factory���ض��幤������������һ��ConcreteProductʵ��



**/
int main()
{
	//����virtual Product* factoryMethod()=0;���Ǵ��麯��������ʹ�ã�ֻ��ʹ����������
	ConcreteFactoryA factoryA= ConcreteFactoryA();
	Product *product = factoryA.factoryMethod();
	product->productMethod();
	delete product;
	while (1);
	return 0;
}