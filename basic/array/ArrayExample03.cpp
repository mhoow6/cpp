#include <iostream>

int main()
{
	// ������ ���ڸ� �־ �迭�� �Ҵ��� �� �ִ�.
	int array[][5] =
	{
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15}
	};

	// ������ �迭
	int bigArray[1][1][5];


	// 2���� �迭 ��ü ���
	int row = sizeof(array) / sizeof(array[0]);
	int column = sizeof(array[0]) / sizeof(int);

	
	// ��ü ���
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			std::cout << array[i][j] << "\t";
		}

		std::cout << "\n";
	}
}