#include <iostream>

void foo(int param);
void AddOne(int& param);
void PrintNum(const int& param);
void MakeNullPtr(int*& ptr);
void PointerIsNullPtr(int* ptr);

int main()
{
	int x = 1;
	int* xPtr = &x;

	std::cout << "���� ��: " << x << std::endl;

	foo(x);

	std::cout << "������ ��: " << x << std::endl;

	AddOne(x);

	std::cout << "������ ��: " << x << std::endl;

	PrintNum(x);

	////////////////////////////////////////////////////////////////////////////////

	std::cout << "(PointerIsNullPtr ���) xPtr�� null? " << (xPtr ? "NOT NULL" : "NULL") << std::endl;

	PointerIsNullPtr(xPtr);

	std::cout << "(PointerIsNullPtr ���) xPtr�� null? " << (xPtr ? "NOT NULL" : "NULL") << std::endl;

	////////////////////////////////////////////////////////////////////////////////

	std::cout << "(MakeNullPtr ���) xPtr�� null? " << (xPtr ? "NOT NULL" : "NULL") << std::endl;

	MakeNullPtr(xPtr);

	std::cout << "(MakeNullPtr ���) xPtr�� null? " << (xPtr ? "NOT NULL" : "NULL") << std::endl;

	return 0;
}

// 1. ������ ����
// �⺻ �ڷ����� �����ڸ� ������ ���� ������ �����ϰ�
// ����ü�� Ŭ���� �� ū �ڷ����� ������ ���� ������ �����ϸ� �� ��
void foo(int param)
{
	std::cout << "�μ��� ������ ��: " << param << std::endl;

	param = 100; // ������ ���������Ƿ� ���� �μ��� ������ �� ����.

	std::cout << "�Լ� �ȿ��� ������ ��: " << param << std::endl;
}

// 2. ������ ����
void AddOne(int& param)
{
	param = param + 1;
}

// const ������ ����ϴ� ���� �μ��� �б������̶�� ���� �����Ϸ� �� ���α׷��ӿ��� �˸���.
void PrintNum(const int& param)
{
	std::cout << "����� ��: " << param << std::endl;
}

// ������ ����
void MakeNullPtr(int*& ptr)
{
	ptr = nullptr;
}

// 3. �ּҷ� ����
// ������ �����ϴ� �Ͱ� ����ϳ� �μ��� �ּҸ� �ٲ��� ����
void PointerIsNullPtr(int* ptr)
{
	// �����Ͱ� ����Ű�� �ּҰ� �Լ��� �Ű������� ����� (�� �����̶� �Ȱ���)
	// ���� �� ������ �Լ� �ȿ����� ��ȿ��
	ptr = nullptr; 
}