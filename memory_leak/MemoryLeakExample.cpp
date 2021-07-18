#define _CRTDBG_MAP_ALLOC
#include <iostream>
#include <crtdbg.h>

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	// 메모리 번호  157번에서 메모리가 할당되는 시점에 중단
	//_CrtSetBreakAlloc(157);

	std::cout << "Memory Leak Test" << std::endl;

	int* p1;
	int* p2;

	p1 = new int();
	delete p1;

	p2 = new int();

	/* 메모리 블럭 157번에서 누수 발생
	 * Detected memory leaks!
	 * Dumping objects ->
	 * {157} normal block at 0x01539C28, 4 bytes long
	 */

	return 0;
}