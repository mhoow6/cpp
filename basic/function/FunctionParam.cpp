#include <iostream>

void foo(int param);
void AddOne(int& param);
void PrintNum(const int& param);
void MakeNullPtr(int*& ptr);
void PointerIsNullPtr(int* ptr);

int main()
{
	int x = 1;
	int* xPtr = &x;

	std::cout << "원래 값: " << x << std::endl;

	foo(x);

	std::cout << "수정된 값: " << x << std::endl;

	AddOne(x);

	std::cout << "더해진 값: " << x << std::endl;

	PrintNum(x);

	////////////////////////////////////////////////////////////////////////////////

	std::cout << "(PointerIsNullPtr 사용) xPtr은 null? " << (xPtr ? "NOT NULL" : "NULL") << std::endl;

	PointerIsNullPtr(xPtr);

	std::cout << "(PointerIsNullPtr 사용) xPtr은 null? " << (xPtr ? "NOT NULL" : "NULL") << std::endl;

	////////////////////////////////////////////////////////////////////////////////

	std::cout << "(MakeNullPtr 사용) xPtr은 null? " << (xPtr ? "NOT NULL" : "NULL") << std::endl;

	MakeNullPtr(xPtr);

	std::cout << "(MakeNullPtr 사용) xPtr은 null? " << (xPtr ? "NOT NULL" : "NULL") << std::endl;

	return 0;
}

// 1. 값으로 전달
// 기본 자료형과 열거자를 전달할 때만 값으로 전달하고
// 구조체나 클래스 등 큰 자료형을 전달할 때는 값으로 전달하면 안 돼
void foo(int param)
{
	std::cout << "인수로 전달한 값: " << param << std::endl;

	param = 100; // 값으로 전달했으므로 원래 인수를 수정할 수 없다.

	std::cout << "함수 안에서 수정된 값: " << param << std::endl;
}

// 2. 참조로 전달
void AddOne(int& param)
{
	param = param + 1;
}

// const 참조를 사용하는 것은 인수가 읽기전용이라는 것을 컴파일러 및 프로그래머에게 알린다.
void PrintNum(const int& param)
{
	std::cout << "출력한 값: " << param << std::endl;
}

// 포인터 참조
void MakeNullPtr(int*& ptr)
{
	ptr = nullptr;
}

// 3. 주소로 전달
// 참조로 전달하는 것과 비슷하나 인수의 주소를 바꾸진 못함
void PointerIsNullPtr(int* ptr)
{
	// 포인터가 가리키는 주소가 함수의 매개변수로 복사됨 (값 전달이랑 똑같음)
	// 따라서 이 구문은 함수 안에서만 유효함
	ptr = nullptr; 
}