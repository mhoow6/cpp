#include "NameSpaceExampleFoo.h"
#include "NameSpaceExampleGoo.h"
#include <iostream>

/*
 * namespace: ��� �ĺ���(����, �Լ�, ���� ���� �̸�)�� �����ϵ��� �����ϴ� �ڵ� ����
 * namespace Ű���带 �̿��Ͽ� ������ �Լ��� �浹 ���� ����
 */


int main()
{
	std::cout << Foo::DoSomething() << std::endl;
	std::cout << Goo::DoSomething() << std::endl;
}