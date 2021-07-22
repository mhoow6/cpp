/* ���� �޸� �Ҵ�
 * ���α׷� ���� �� �ʿ��� �޸𸮸� �ü���� ��û�ϴ� ���
 * �޸𸮴� �ü���� �����ϴ� heap���� �����´�.
 */

#include <iostream>

int main()
{
	int* ptr = new int; // heap�� int�� �޸𸮸� �Ҵ��Ѵ�.
	*ptr = 7;

	int* _ptr = new int(5);
	int* __ptr = new int{ 6 };

	std::cout << *ptr << std::endl;

	delete ptr; // �Ҵ��� �����Ǿ� dangling pointer�� �Ǿ���.

	// std::cout << *ptr << std::endl; // ���� �߻�

	// ������ ��� ��������� �ü������ �޸𸮸� ��ȯ�ؾ� �Ѵ�.
	delete _ptr;
	delete __ptr;

	// �ü���� �޸𸮸� �� �� ���� ��Ȳ�� �� nullptr�� ��ȯ�ϵ��� �Ѵ�.
	int* valuePtr = new (std::nothrow) int;

	// �޸� ������ ����� ��� (1)
	int value = 5;
	int* _valuePtr = new int;
	// delete _valuePtr
	_valuePtr = &value;


	// �޸� ������ ����� ��� (2)
	int* __valuePtr = new int;
	__valuePtr = new int;
}