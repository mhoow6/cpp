#include <iostream>

int main()
{
	char alexName[] = "Alex";
	const char* bennetName = "Bennet"; // �б� ���� �޸𸮿� Bennet\0�� ��ġ�Ѵ�.
	int* iPtr(nullptr);
	int iValue = 1;
	const char key = 'Q';

	iPtr = &iValue;

	// std::cout�� const char* ������ ��ü�� �����ϸ� ���ڿ��� ����Ѵٰ� �����Ѵ�.
	std::cout << alexName << std::endl;
	std::cout << bennetName << std::endl;
	std::cout << iPtr << std::endl;

	// char* Ÿ���̹Ƿ� \0�� ���������� ���ڿ��� ����ҷ��� �Ѵ�.
	std::cout << &key << std::endl;
	
	return 0;
}