#include <iostream>

int main()
{
	int x = 0;

	std::cout << x << "\n";

	std::cout << &x << "\n"; // �޸��� �ּ� ���

	std::cout << *&x << "\n"; // �޸��� �ּ��� ���� ��

	std::cout << sizeof(x) << "\n"; // �������� ũ��� �����ϵ� ��Ű��ó�� ���� �޶����� ���� 4byte(32bit)�̴�

	return 0;
}