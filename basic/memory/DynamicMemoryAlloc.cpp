/* 동적 메모리 할당
 * 프로그램 실행 중 필요한 메모리를 운영체제에 요청하는 방법
 * 메모리는 운영체제가 관리하는 heap에서 가져온다.
 */

#include <iostream>

int main()
{
	int* ptr = new int; // heap에 int형 메모리를 할당한다.
	*ptr = 7;

	int* _ptr = new int(5);
	int* __ptr = new int{ 6 };

	std::cout << *ptr << std::endl;

	delete ptr; // 할당이 해제되어 dangling pointer가 되었다.

	// std::cout << *ptr << std::endl; // 에러 발생

	// 변수를 모두 사용했으면 운영체제에게 메모리를 반환해야 한다.
	delete _ptr;
	delete __ptr;

	// 운영체제가 메모리를 줄 수 없는 상황일 때 nullptr을 반환하도록 한다.
	int* valuePtr = new (std::nothrow) int;

	// 메모리 누수가 생기는 경우 (1)
	int value = 5;
	int* _valuePtr = new int;
	// delete _valuePtr
	_valuePtr = &value;


	// 메모리 누수가 생기는 경우 (2)
	int* __valuePtr = new int;
	__valuePtr = new int;
}