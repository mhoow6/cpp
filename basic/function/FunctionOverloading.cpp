#include <iostream>

struct Employee
{
	uint16_t id;
	char* name;
};

void print(float value)
{

}

void print(Employee value)
{

}

void extract(float value){}
void extract(double value){}

int main()
{
	// 1. �°� (promotion)�� ���� �������̵��� �Լ��� ã�´�.
	// '0'�� ���� �Լ��� ��Ȯ�� ��ġ�ϴ� �׸��� �����Ƿ�
	// C++�� �°��� ���� ��ġ�ϴ� �Լ��� ã������ ��.
	// �°��� �ڷ����� char -> int -> float.. �̷������� �ø��ٴ� �̾߱���
	print('0');

	// 2. ��ȣ�� ��ġ
	// ���� ��Ȳ�� �μ��� float���� double���� �°����ε� ó���� �� �ϴ� ��Ȳ
	// static_cast���� ����� ����ȯ�� �ؾ���
	extract(static_cast<float>(3));
}