#include <iostream>
#include <utility>
#include <functional> // std::function으로 함수포인터 정의

int foo(int x)
{
	return x;
}

int goo()
{
	return 6;
}

// bool (*compareFcn)(int, int) -> std::function<bool(int, int)> fcn
void SelectionSort(int* Array, int size, bool (*compareFcn)(int, int))
{
	for (int i = 0; i < size; ++i)
	{
		int smallestIndex = i;

		for (int j = i + 1; j < size; ++j)
		{
			if (compareFcn(Array[smallestIndex], Array[j]))
				smallestIndex = j;
		}

		std::swap(Array[smallestIndex], Array[i]);
	}
}

void PrintArray(int* arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << "Array(" << i << ") " << arr[i] << std::endl;
	}
}

// 오름차순 정렬
bool ascending(int x, int y)
{
	return x > y;
}

// 내림차순 정렬
bool descending(int x, int y)
{
	return x < y;
}

int main()
{
	int(*fcnPtr)(int) = foo; // 함수포인터 fcnPtr은 foo의 주소를 가리킨다.
	int array[9] = { 1, 3, 2, 5, 4, 6, 7, 9, 8 };
	
	// 함수 호출
	/*(*fcnPtr)(5);
	fcnPtr(5);*/

	PrintArray(array, 9);

	SelectionSort(array, 9, descending);

	std::cout << "-----------------------------------------" << std::endl;

	PrintArray(array, 9);
	
	return 0;
}