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
	// 1. 승격 (promotion)을 통해 오버라이딩한 함수를 찾는다.
	// '0'은 위의 함수와 정확히 일치하는 항목이 없으므로
	// C++은 승격을 통해 일치하는 함수를 찾을려고 함.
	// 승격은 자료형을 char -> int -> float.. 이런식으로 올린다는 이야기임
	print('0');

	// 2. 모호한 일치
	// 현재 상황은 인수가 float인지 double인지 승격으로도 처리를 못 하는 상황
	// static_cast으로 명시적 형변환을 해야함
	extract(static_cast<float>(3));
}