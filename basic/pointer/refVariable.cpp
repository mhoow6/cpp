#include <iostream>

void ChangeValue(int& ref);
void DisplayArrayElements(int(&arr)[4]);
void PrintValue(const int& ref);

int main()
{
	int value = 5;
	int& refValue = value; // 참조형 변수

	refValue = 6;

	std::cout << "Value: " << value << std::endl;
	std::cout << "refValue: " << refValue << std::endl;

	std::cout << "-------------------------------------------------" << std::endl;

	std::cout << "Value Add: " << &value << std::endl;
	std::cout << "refValue Add: " << &refValue << std::endl;

	const int y = 7;
	// int& refY = y; // const를 초기화할 수 없음

	std::cout << "-------------------------------------------------" << std::endl;

	ChangeValue(refValue);
	std::cout << "Value: " << refValue << std::endl;

	std::cout << "-------------------------------------------------" << std::endl;
	PrintValue(2 + 3);

	return 0;
}

// 참조형 변수를 매개변수로 받아와 복사본이 생성되지 않게 한다.
void ChangeValue(int& ref)
{
	ref = 2100000000;
}

void PrintValue(const int& ref)
{
	std::cout << ref << std::endl;
	// ref = 3; // const라서 수정 불가
}

// 참조로 배열의 크기를 가져올 수 있다.
void DisplayArrayElements(int(&arr)[4])
{
	int length = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < length; ++i)
	{
		std::cout << arr[i] << std::endl;
	}
}