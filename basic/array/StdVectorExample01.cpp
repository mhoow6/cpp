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
	// 1. std::vector���� length�� capacity�� �� ���� �Ӽ��� ����
	std::vector<int> array{ 1, 2, 3, 4, 5 };

	std::cout << "array�� ũ��: " << array.size() << std::endl;
	std::cout << "array�� �뷮: " << array.capacity() << std::endl;

	// �޸𸮸� ���Ҵ�� ���� ����� ũ�� ������ �� �� ������ ���Ͻñ�
	array = { 1, 3, 5 };

	std::cout << "array�� ũ��: " << array.size() << std::endl;
	std::cout << "array�� �뷮: " << array.capacity() << std::endl;

	// []�� at�� �迭�� ���̸� �������� ��
	array[0] = 0;
	array.at(0) = 0;

	// int -> auto
	for (int const& element : array)
		std::cout << element << " ";
	std::cout << std::endl;

	// �̷��� �ϸ� vector ���� ��ҵ��� �޸𸮴� �����Ǿ� size�� 0�̵�����, vector�� capacity�� ������ �� ����
	array.clear();
	PrintStack(array);

	// �� vector �ӽ� ��ü�� swap�Ͽ� capacity�� ���δ�.
	std::vector<int>().swap(array);
	PrintStack(array);

	std::cout << "===================================================" << std::endl;

	// 2. std�� ���� �迭������ ����ó�� ������
	std::vector<int> stack;
	PrintStack(stack);
	stack.reserve(5); // vector�� capactiy�� 5�� ���س��´�.

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