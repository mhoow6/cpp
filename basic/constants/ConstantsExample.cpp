// ����ſ� �߰ߵ��� �ʰ�, ���Ŀ� ����� ���� �浹�� �� �־� ����� ����ϱ⿣ ������ �ִ�.
#define MAX_VALUE 30;
#include <iostream>

int main()
{
	// ������ or ��Ÿ�� ��� Ű����
	const double GRAVITY { 9.8f };

	int age = 0;
	const double AGE(age); // ��Ÿ�ӿ��� ���� �����Ǵ� ���

	// ������ Ÿ�� ��� Ű����
	constexpr int MAX_NUM { 30 };

	std::cout << "Enter the Friction" << std::endl;
	std::cin >> age;
}