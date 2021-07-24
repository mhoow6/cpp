#include <iostream>

void ChangeValue(int& ref);
void DisplayArrayElements(int(&arr)[4]);
void PrintValue(const int& ref);

int main()
{
	int value = 5;
	int& refValue = value; // ������ ����

	refValue = 6;

	std::cout << "Value: " << value << std::endl;
	std::cout << "refValue: " << refValue << std::endl;

	std::cout << "-------------------------------------------------" << std::endl;

	std::cout << "Value Add: " << &value << std::endl;
	std::cout << "refValue Add: " << &refValue << std::endl;

	const int y = 7;
	// int& refY = y; // const�� �ʱ�ȭ�� �� ����

	std::cout << "-------------------------------------------------" << std::endl;

	ChangeValue(refValue);
	std::cout << "Value: " << refValue << std::endl;

	std::cout << "-------------------------------------------------" << std::endl;
	PrintValue(2 + 3);

	return 0;
}

// ������ ������ �Ű������� �޾ƿ� ���纻�� �������� �ʰ� �Ѵ�.
void ChangeValue(int& ref)
{
	ref = 2100000000;
}

void PrintValue(const int& ref)
{
	std::cout << ref << std::endl;
	// ref = 3; // const�� ���� �Ұ�
}

// ������ �迭�� ũ�⸦ ������ �� �ִ�.
void DisplayArrayElements(int(&arr)[4])
{
	int length = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < length; ++i)
	{
		std::cout << arr[i] << std::endl;
	}
}