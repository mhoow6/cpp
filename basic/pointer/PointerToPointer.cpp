#include <iostream>

int main()
{
	int* ptr;
	int** dPtr; // 이중 포인터

	dPtr = &ptr;

	// 포인터 배열을 가리키는 이중 포인터
	int** Array = new int* [10];


	// 10행 5열
	for (int i = 0; i < 10; ++i)
	{
		Array[i] = new int[5];
	}

	Array[1][4] = 4;

	std::cout << Array[1][4] << std::endl;

	// 배열의 원소들 메모리 해제
	for (int i = 0; i < 10; i++)
		delete[] Array[i];

	// 포인터 메모리 해제
	delete[] Array;

	return 0;
}