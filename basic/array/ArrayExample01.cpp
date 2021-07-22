#include <iostream>

namespace Student
{
	enum StudentNames
	{
		KENNY,
		KYLE,
		STAN,
		BUTTERS,
		CARTMAN,
		MAX_STUDENTS
	};
}


int main()
{
	int prime[5] = { 2, 3, 5, 7, 11 };
	int price[] { 2, 3, 5, 7, 11 }; // 유니폼 초기화 사용 가능

	// 열거자 활용
	int scores[Student::MAX_STUDENTS];
	scores[Student::KYLE] = 70;

	return 0;
}

// const로 지정하여 함수 내에서 상수로 처리되어 컴파일에러
void PassArray(const int array[5])
{
	/*array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;*/

}