#include "Date.h"
#include <iostream>

int main()
{
	// 상수 클래스는 생성자를 제외하곤 어떠한 쓰기 동작을 허용하지 않음
	// 상수 클래스는 오로지 상수 멤버 함수만 호출 가능
	const Date date1(2020, 8, 7);
	const Date date2{ 2020, 8, 7 };

	date1.GetDay();
}