#include <iostream>
#include <array>

// 1. ������ ��ȯ
// ����ü�� Ŭ������ ��ȯ�� ���� ����
int doubleValue(int x)
{
	int value = x * 2;

	return value;
}

// 2. �ּҷ� ��ȯ
// ���� ������ �ּҸ� ��ȯ���� �ʵ��� ��������
int* allocArray(int size)
{
	return new int[size];
}

// 3. ������ ��ȯ
// ������ ���� ���� ������ ��ȯ���� �ʵ��� ��������
int& getElementInArray(std::array<int, 25>& Array, int index)
{
	return Array[index];
}


