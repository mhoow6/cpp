#include <iostream>

namespace a {
	int x(10);
}

namespace b {
	int x(20);
}

int main()
{
	using std::cout; // cout�� std::cout�� ����Ѵٴ� ���� �˷���

	using namespace a;
	using namespace b;

	cout << "Hello World!";

	// x�� ���� ��ȣ�� �߻�
	// cout << x;

	return 0;
}