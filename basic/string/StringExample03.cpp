#include <iostream>
#define __STDC_WANT_LIB_EXT1__ 1 // strcpy_s�� �����ϱ� ���� �����ؾ� ��
#include <cstring>

int main()
{
	char source[] = "C++ Noob";
	char message[10];

	// message�� source�� 10byte��ŭ ����
	strcpy_s(message, 10, source);
	std::cout << message << std::endl;

	std::cout << "Message Length: " << strlen(message) << std::endl;

	return 0;
}