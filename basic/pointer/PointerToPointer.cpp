#include <iostream>

int main()
{
	int* ptr;
	int** dPtr; // ���� ������

	dPtr = &ptr;

	// ������ �迭�� ����Ű�� ���� ������
	int** Array = new int* [10];


	// 10�� 5��
	for (int i = 0; i < 10; ++i)
	{
		Array[i] = new int[5];
	}

	Array[1][4] = 4;

	std::cout << Array[1][4] << std::endl;

	// �迭�� ���ҵ� �޸� ����
	for (int i = 0; i < 10; i++)
		delete[] Array[i];

	// ������ �޸� ����
	delete[] Array;

	return 0;
}