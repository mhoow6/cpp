#include <iostream>
#include <array>

// 1. 값으로 반환
// 구조체나 클래스를 반환할 때는 느림
int doubleValue(int x)
{
	int value = x * 2;

	return value;
}

// 2. 주소로 반환
// 지역 변수의 주소를 반환하지 않도록 주의하자
int* allocArray(int size)
{
	return new int[size];
}

// 3. 참조로 반환
// 쓰레기 값에 대한 참조를 반환하지 않도록 주의하자
int& getElementInArray(std::array<int, 25>& Array, int index)
{
	return Array[index];
}


