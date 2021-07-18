#define _CRTDBG_MAP_ALLOC
#include <iostream>
#include <crtdbg.h>

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	// �޸� ��ȣ  157������ �޸𸮰� �Ҵ�Ǵ� ������ �ߴ�
	//_CrtSetBreakAlloc(157);

	std::cout << "Memory Leak Test" << std::endl;

	int* p1;
	int* p2;

	p1 = new int();
	delete p1;

	p2 = new int();

	/* �޸� �� 157������ ���� �߻�
	 * Detected memory leaks!
	 * Dumping objects ->
	 * {157} normal block at 0x01539C28, 4 bytes long
	 */

	return 0;
}