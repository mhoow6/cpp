#include <iostream>

const float g_PI(3.1f); // 전역 변수

// 내부 파일(링크)에서만 사용 가능한 전역 변수
static int g_X(1);

// 외부 파일에서도 사용 가능한 전역 변수
extern int g_Y(2);

// const 선언을 하지 않으면 자동으로 extern
int g_Z(3);

int main()
{
	float pi(3.14f);
	float g_PI; // 선언하는 순간 전역변수를 숨김

	// :: (전역 범위) 연산자를 통하여 전역변수 사용
	std::cout << ::g_PI << std::endl;
	std::cout << pi << std::endl;
}

void DoSomething()
{
	std::cout << g_PI << std::endl;

	// 접근 불가. 오류발생
	// std::cout << pi << std::endl; 
}