#include <iostream>

int main()
{
	// 열에만 숫자를 넣어서 배열을 할당할 수 있다.
	int array[][5] =
	{
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15}
	};

	// 다차원 배열
	int bigArray[1][1][5];


	// 2차원 배열 전체 출력
	int row = sizeof(array) / sizeof(array[0]);
	int column = sizeof(array[0]) / sizeof(int);

	
	// 전체 출력
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			std::cout << array[i][j] << "\t";
		}

		std::cout << "\n";
	}
}