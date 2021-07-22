#include <iostream>

int main()
{
	char alexName[] = "Alex";
	const char* bennetName = "Bennet"; // 읽기 전용 메모리에 Bennet\0을 배치한다.
	int* iPtr(nullptr);
	int iValue = 1;
	const char key = 'Q';

	iPtr = &iValue;

	// std::cout는 const char* 유형의 객체를 전달하면 문자열을 출력한다고 가정한다.
	std::cout << alexName << std::endl;
	std::cout << bennetName << std::endl;
	std::cout << iPtr << std::endl;

	// char* 타입이므로 \0을 만날때까지 문자열을 출력할려고 한다.
	std::cout << &key << std::endl;
	
	return 0;
}