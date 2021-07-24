#include <array>
#include <iostream>
#include <algorithm>

void PrintArrayLength(const std::array<int, 5>& Array);

int main()
{
	std::array<int, 5> myArray{ 1, 2, 3 }; // ������ ���Ҵ� 0

	// at�� []���� ��ȿ ���� �˻縦 ���ִ� �޼���� ����
	// [] ���� ���� ������ �� �� �ۿ� ����
	myArray.at(1) = 5;

	// ���� throw
	// myArray.at(10) = 0;

	// �迭�� ũ��
	PrintArrayLength(myArray);

	// �迭 ����
	std::sort(myArray.begin(), myArray.end());

	// �迭 ����
	for (const auto& element : myArray)
		std::cout << element << ' ';
	
	return 0;
}

// std::array�� ���纻���� ����� ���� �����ϱ� ���� const Ű���带 ����ߴ�.
void PrintArrayLength(const std::array<int, 5>& Array)
{
	std::cout << Array.size() << std::endl;
}