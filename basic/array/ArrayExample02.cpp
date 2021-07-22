#include <utility> // c++ 11 이하에선 algorithm
#include <algorithm>
#include <iostream>

int main()
{
	int x = 2;
	int y = 4;
	int array[5] = { 30, 50, 20, 10, 40 };
	const int Length = sizeof(array) / sizeof(int);

	std::cout << "Before swap: x = " << x << ",y = " << y << "\n";

	// utility
	std::swap(x, y); // x와 y를 서로 스왑
	std::cout << "After swap: x = " << x << ",y = " << y << "\n";


	// 정렬할 주소 시작, 끝
	std::sort(array, array + Length);

	std::cout << "[Selection Sort Completed]" << std::endl;
	for (int i = 0; i < Length; i++)
	{
		std::cout << array[i] << " ";
	}
}