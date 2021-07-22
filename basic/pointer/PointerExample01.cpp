#include <iostream>

int main()
{
	int x = 0;

	std::cout << x << "\n";

	std::cout << &x << "\n"; // 메모리의 주소 출력

	std::cout << *&x << "\n"; // 메모리의 주소의 실제 값

	std::cout << sizeof(x) << "\n"; // 포인터의 크기는 컴파일된 아키텍처에 따라 달라지며 보통 4byte(32bit)이다

	return 0;
}