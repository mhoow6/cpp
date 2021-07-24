#include <iostream>

int main()
{
	int Array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	// C# for each�� ����
	for (int num : Array)
		std::cout << num << "\t";

	std::cout << "=============================" << "\t";

	for (auto num : Array)
		std::cout << num << "\t";

	// ���� �����ϰ� ���� ������ const Ű���带 ���������
	// ���� �󿡼� ranged-based for �������� ���� �Ǵ� const ������ ����ϴ°��� ����
	for (const auto& num : Array)
		std::cout << num << "\t";

	return 0;
}

int sumArray(int Array[])
{
	int sum = 0;

	// �����ͷ� �Ѿ�� ���ڶ� ũ�⸦ ���� ���ϱ� ������ ����
	// for (const auto& num : Array)
	//	sum += num;

	return sum;
}