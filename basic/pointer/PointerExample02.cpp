#include <iostream>
#include <cstddef> // std::nullptr_t

void DoSomething(std::nullptr_t ptr);

int main()
{
	float* ptr{ 0 }; // null �����ͷ� �ʱ�ȭ

	// C++ 11������ �� �����ͷ� �ʱ�ȭ. �� ����� ����� ����Ǵ� ���
	// �Ͻ������� ���� �����ͷ� ��ȯ�� ���� nullptr �� ptr�� �Ҵ�

	int* _ptr{ nullptr };
	float value = 3.14f;

	// ptr = &value;

	if (ptr)
		std::cout << "�� �����Ͱ� �ƴմϴ�." << std::endl;
	else
		std::cout << "�� �������Դϴ�." << std::endl;

	DoSomething(nullptr);
}

void DoSomething(std::nullptr_t ptr)
{
	std::cout << "�� �����͸� ���ڷ� �޴� �Լ����" << std::endl;
}