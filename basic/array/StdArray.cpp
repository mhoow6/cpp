#include <array>
#include <iostream>
#include <algorithm>

void PrintArrayLength(const std::array<int, 5>& Array);

int main()
{
	std::array<int, 5> myArray{ 1, 2, 3 }; // 나머지 원소는 0

	// at은 []에서 유효 범위 검사를 해주는 메서드라 생각
	// [] 보단 느린 연산을 할 수 밖에 없음
	myArray.at(1) = 5;

	// 예외 throw
	// myArray.at(10) = 0;

	// 배열의 크기
	PrintArrayLength(myArray);

	// 배열 정리
	std::sort(myArray.begin(), myArray.end());

	// 배열 루프
	for (const auto& element : myArray)
		std::cout << element << ' ';
	
	return 0;
}

// std::array를 복사본으로 만드는 것을 방지하기 위해 const 키워드를 사용했다.
void PrintArrayLength(const std::array<int, 5>& Array)
{
	std::cout << Array.size() << std::endl;
}