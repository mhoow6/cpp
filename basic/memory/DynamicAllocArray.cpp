#include <iostream>

int main()
{
	std::cout << "Array Length? ";
	int length;
	std::cin >> length;

	int* iArray = new int[length];

	iArray[0] = 1;
	iArray[1] = 2;
	iArray[2] = 3;
	iArray[3] = 4;
	iArray[4] = 5;

	for (int i = 0; i < length; ++i)
		std::cout << iArray[i] << std::endl;

	delete[] iArray; // ���� �迭�� ���� �� ���� delete[]

	int* Array = new int[]{ 1, 2, 3, 4, 5 }; // �ʱ�ȭ ����Ʈ�� ����� �����迭 �ʱ�ȭ
	delete[] Array;

	return 0;
}