#include <vector>
#include <iostream>

int main()
{
	std::vector<int> Array; // 동적 배열

	std::cout << "Array의 길이: " << Array.size() << std::endl;
	

	// 1. 배열 접근 std::array랑 동일
	/*Array[0] = 2;
	std::cout << Array[0] << std::endl;*/

	/*Array.at(1) = 3;
	std::cout << Array[1] << std::endl;*/

	// 2. 배열 사이즈 재조정
	std::vector<float> fArray{ 1.0, 2.0, 3.0 };
	fArray.resize(5);

	std::cout << "fArray의 길이: " << fArray.size() << std::endl;

	for (const auto& element : fArray)
		std::cout << element << std::endl;

	return 0;
}

void DoSomething(bool earlyExit)
{
	int* array = new int[5]{ 1, 2, 3, 4, 5 };

	if (earlyExit)
		return;

	// 일반 array일 경우 delete를 하지 않아 메모리 누수가 발생하지만
	// std::vector는 scope을 벗어나면 메모리를 자동으로 해제하여 누수가 되지 않음
	delete[] array;
}