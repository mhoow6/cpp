#include "Date.h"
#include <iostream>

int main()
{
	// ��� Ŭ������ �����ڸ� �����ϰ� ��� ���� ������ ������� ����
	// ��� Ŭ������ ������ ��� ��� �Լ��� ȣ�� ����
	const Date date1(2020, 8, 7);
	const Date date2{ 2020, 8, 7 };

	date1.GetDay();
}