#include <vector>
#include <iostream>

int main()
{
	std::vector<int> Array; // ���� �迭

	std::cout << "Array�� ����: " << Array.size() << std::endl;
	

	// 1. �迭 ���� std::array�� ����
	/*Array[0] = 2;
	std::cout << Array[0] << std::endl;*/

	/*Array.at(1) = 3;
	std::cout << Array[1] << std::endl;*/

	// 2. �迭 ������ ������
	std::vector<float> fArray{ 1.0, 2.0, 3.0 };
	fArray.resize(5);

	std::cout << "fArray�� ����: " << fArray.size() << std::endl;

	for (const auto& element : fArray)
		std::cout << element << std::endl;

	return 0;
}

void DoSomething(bool earlyExit)
{
	int* array = new int[5]{ 1, 2, 3, 4, 5 };

	if (earlyExit)
		return;

	// �Ϲ� array�� ��� delete�� ���� �ʾ� �޸� ������ �߻�������
	// std::vector�� scope�� ����� �޸𸮸� �ڵ����� �����Ͽ� ������ ���� ����
	delete[] array;
}