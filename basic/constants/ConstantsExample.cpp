// 디버거에 발견되지 않고, 추후에 선언된 값과 충돌할 수 있어 상수로 사용하기엔 문제가 있다.
#define MAX_VALUE 30;
#include <iostream>

int main()
{
	// 컴파일 or 런타임 상수 키워드
	const double GRAVITY { 9.8f };

	int age = 0;
	const double AGE(age); // 런타임에서 값이 결정되는 상수

	// 컴파일 타임 상수 키워드
	constexpr int MAX_NUM { 30 };

	std::cout << "Enter the Friction" << std::endl;
	std::cin >> age;
}