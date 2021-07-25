#include <iostream>
#include <vector>

void PrintStack(const std::vector<int>& stack)
{
	for (const auto& ele : stack)
		std::cout << ele << "";

	std::cout << " (cap" << stack.capacity() << " length" << stack.size() << ")\n";
}

int main()
{
	// 1. std::vector에선 length와 capacity의 두 가지 속성이 있음
	std::vector<int> array{ 1, 2, 3, 4, 5 };

	std::cout << "array의 크기: " << array.size() << std::endl;
	std::cout << "array의 용량: " << array.capacity() << std::endl;

	// 메모리를 재할당는 것은 비용이 크기 때문에 될 수 있으면 피하시길
	array = { 1, 3, 5 };

	std::cout << "array의 크기: " << array.size() << std::endl;
	std::cout << "array의 용량: " << array.capacity() << std::endl;

	// []과 at은 배열의 길이를 기준으로 함
	array[0] = 0;
	array.at(0) = 0;

	// int -> auto
	for (int const& element : array)
		std::cout << element << " ";
	std::cout << std::endl;

	// 이렇게 하면 vector 안의 요소들의 메모리는 해제되어 size는 0이되지만, vector의 capacity는 조절할 수 없음
	array.clear();
	PrintStack(array);

	// 빈 vector 임시 객체랑 swap하여 capacity을 줄인다.
	std::vector<int>().swap(array);
	PrintStack(array);

	std::cout << "===================================================" << std::endl;

	// 2. std는 동적 배열이지만 스택처럼 동작함
	std::vector<int> stack;
	PrintStack(stack);
	stack.reserve(5); // vector의 capactiy를 5로 정해놓는다.

	stack.push_back(1);
	stack.push_back(2);
	stack.push_back(3);
	stack.push_back(4);
	PrintStack(stack);

	std::cout << "Top: " << stack.back() << "\n";

	stack.pop_back();
	PrintStack(stack);

	return 0;
}