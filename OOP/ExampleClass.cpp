#include <iostream>

/* 객체
 * 전통적인 프로그래밍에서는 값을 저장하는 메모리 조각을 의미함.
 * 속성과 동작을 결합한 객체라는 것을 의미
 */

struct DateStruct
{
	int year;
	int month;
	int day;
};

/* 캡슐화 */
// 일반적으로 멤버 함수(공개 인터페이스)는 공개, 멤버 변수(구현 세부 정보)는 비공개로 한다.
// 캡슐화된 클래스는 사용하기 쉽고 프로그램의 복잡성을 줄여줌
class DateClass
{
private:
	int m_year;
	int m_month;
	int m_day;

public:
	/* 생성자 */
	// 클래스가 인스턴스화될 때 자동으로 호출
	// 생성자가 클래스에 구현되있지 않으면 컴파일러는 자동으로 기본 생성자를 생성한다.
	// C++에선 멤버 초기화 리스트를 사용하여 멤버 변수 초기화 가능
	DateClass(int year = 0, int month = 0, int day = 0) : m_year(year), m_month(month), m_day(day)
	{
		/* 멤버 변수를 굳이 여기서 할당할 필요가 없음 */
		//m_year = year;
		//m_month = month;
		//m_day = day;
	}

	int getYear() { return m_year; }
	int getMonth() { return m_month; }
	int getDay() { return m_day; }

	void print()
	{
		std::cout << m_year << "/" << m_month << "/" << m_day;
	}

	void setDate(int month, int day, int year)
	{
		m_year = year;
		m_month = month;
		m_day = day;
	}
};

class Something
{
private:
	const int somethingArray[5];

public:
	// C++ 11 유니폼 초기화를 사용하여 멤버 배열을 완전히 초기화
	// 멤버 초기화를 하여 초기값이 필요한 멤버를 초기화 시킬 수 있다
	Something() : somethingArray{}
	{

	}

};

class A
{
public:
	A(int x) { std::cout << "A " << x << "\n"; }
};

class B
{
private:
	A m_a;
public:
	// 생성자를 호출 시켜 B의 멤버인 m_a를 초기화한다.
	B(int y) : m_a(y - 1)
	{
		std::cout << "B " << y << "\n";
	}
};

class Rect
{
private:
	double length = 1.0; // c++ 11부터 이런식으로 멤버 초기화 가능
	double width{ 1.0 };
	// double width(1.0) // error
	
public:
	// 기본값 초기화보다 생성자 멤버 초기화 리스트가 우선시된다!
	Rect(double leng, double wid) : length(leng), width(wid)
	{
		
	}
};

class Test
{
private:

public:
	Test()
	{
		// Code A
	}

	// C++ 11 부터 생겨난 기능
	// 생성자를 위임하여 코드의 중복을 방지
	// Test()가 먼저 호출되고 그 다음 Test(int value)가 호출됨
	Test(int value) : Test()
	{
		// Code B
	}
};

class IntArray
{
private:
	int* m_Array;
	int m_Length;

public:
	IntArray(int length)
	{
		m_Array = new int[length]{};
		m_Length = length;
	}

	// 소멸자
	// 객체가 delete 키워드를 통해 명시적으로 삭제되면 그 전에 자동으로 호출
	~IntArray()
	{
		delete[] m_Array;
	}

	void SetValue(int index, int value)
	{
		m_Array[index] = value;
	}

	int GetValue(int index)
	{
		return m_Array[index];
	}

	int GetLength()
	{
		return m_Length;
	}
};

int main()
{
	// 클래스의 변수를 정의할 때 "클래스의 인스턴스화" 라고 부른다
	// 클래스 타입의 변수를 "객체" 라고 부름
	DateClass birthday(1997, 6, 13);

	birthday.setDate(1997, 6, 13);

	// 멤버 함수 호출 시, 멤버 변수는 연관된 객체가 "암시적으로" 전달된다.
	// std::cout << birthday.m_year << "/" << birthday.m_month << "/" << birthday.m_day;
	birthday.print();

	IntArray arr(10);

	for (int i = 0; i < arr.GetLength(); ++i)
		arr.SetValue(i, i + 1);

	std::cout << arr.GetValue(5) << "\n";

	return 0;
} // arr 객체는 여기서 삭제되므로 ~IntArray()는 여기서 호출됨