#include <iostream>

const float g_PI(3.1f); // ���� ����

// ���� ����(��ũ)������ ��� ������ ���� ����
static int g_X(1);

// �ܺ� ���Ͽ����� ��� ������ ���� ����
extern int g_Y(2);

// const ������ ���� ������ �ڵ����� extern
int g_Z(3);

int main()
{
	float pi(3.14f);
	float g_PI; // �����ϴ� ���� ���������� ����

	// :: (���� ����) �����ڸ� ���Ͽ� �������� ���
	std::cout << ::g_PI << std::endl;
	std::cout << pi << std::endl;
}

void DoSomething()
{
	std::cout << g_PI << std::endl;

	// ���� �Ұ�. �����߻�
	// std::cout << pi << std::endl; 
}