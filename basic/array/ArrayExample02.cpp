#include <utility> // c++ 11 ���Ͽ��� algorithm
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
	std::swap(x, y); // x�� y�� ���� ����
	std::cout << "After swap: x = " << x << ",y = " << y << "\n";


	// ������ �ּ� ����, ��
	std::sort(array, array + Length);

	std::cout << "[Selection Sort Completed]" << std::endl;
	for (int i = 0; i < Length; i++)
	{
		std::cout << array[i] << " ";
	}
}