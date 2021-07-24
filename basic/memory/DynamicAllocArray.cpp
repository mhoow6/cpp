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

	delete[] iArray; // 동적 배열을 해제 할 때는 delete[]

	int* Array = new int[]{ 1, 2, 3, 4, 5 }; // 초기화 리스트를 사용한 동적배열 초기화
	delete[] Array;

	return 0;
}