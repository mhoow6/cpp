#include "NameSpaceExampleFoo.h"
#include "NameSpaceExampleGoo.h"
#include <iostream>

/*
 * namespace: 모든 식별자(변수, 함수, 형식 등의 이름)이 고유하도록 보장하는 코드 영역
 * namespace 키워드를 이용하여 동일한 함수의 충돌 방지 가능
 */


int main()
{
	std::cout << Foo::DoSomething() << std::endl;
	std::cout << Goo::DoSomething() << std::endl;
}