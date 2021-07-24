#include <iostream>

int main()
{
	int Array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	// C# for each와 동일
	for (int num : Array)
		std::cout << num << "\t";

	std::cout << "=============================" << "\t";

	for (auto num : Array)
		std::cout << num << "\t";

	// 값을 수정하고 싶지 않으면 const 키워드를 사용해주자
	// 성능 상에서 ranged-based for 루프에서 참조 또는 const 참조를 사용하는것이 좋음
	for (const auto& num : Array)
		std::cout << num << "\t";

	return 0;
}

int sumArray(int Array[])
{
	int sum = 0;

	// 포인터로 넘어온 인자라 크기를 알지 못하기 때문에 에러
	// for (const auto& num : Array)
	//	sum += num;

	return sum;
}