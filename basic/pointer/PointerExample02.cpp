#include <iostream>
#include <cstddef> // std::nullptr_t

void DoSomething(std::nullptr_t ptr);

int main()
{
	float* ptr{ 0 }; // null 포인터로 초기화

	// C++ 11에서의 널 포인터로 초기화. 이 방법이 사용이 권장되는 방법
	// 암시적으로 정수 포인터로 변환된 다음 nullptr 이 ptr에 할당

	int* _ptr{ nullptr };
	float value = 3.14f;

	// ptr = &value;

	if (ptr)
		std::cout << "널 포인터가 아닙니다." << std::endl;
	else
		std::cout << "널 포인터입니다." << std::endl;

	DoSomething(nullptr);
}

void DoSomething(std::nullptr_t ptr)
{
	std::cout << "널 포인터를 인자로 받는 함수라니" << std::endl;
}