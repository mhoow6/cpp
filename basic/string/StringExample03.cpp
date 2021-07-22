#include <iostream>
#define __STDC_WANT_LIB_EXT1__ 1 // strcpy_s를 지원하기 위해 정의해야 함
#include <cstring>

int main()
{
	char source[] = "C++ Noob";
	char message[10];

	// message로 source를 10byte만큼 복사
	strcpy_s(message, 10, source);
	std::cout << message << std::endl;

	std::cout << "Message Length: " << strlen(message) << std::endl;

	return 0;
}