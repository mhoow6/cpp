#include <iostream>

/* ��ü
 * �������� ���α׷��ֿ����� ���� �����ϴ� �޸� ������ �ǹ���.
 * �Ӽ��� ������ ������ ��ü��� ���� �ǹ�
 */

struct DateStruct
{
	int year;
	int month;
	int day;
};

/* ĸ��ȭ */
// �Ϲ������� ��� �Լ�(���� �������̽�)�� ����, ��� ����(���� ���� ����)�� ������� �Ѵ�.
// ĸ��ȭ�� Ŭ������ ����ϱ� ���� ���α׷��� ���⼺�� �ٿ���
class DateClass
{
private:
	int m_year;
	int m_month;
	int m_day;

public:
	/* ������ */
	// Ŭ������ �ν��Ͻ�ȭ�� �� �ڵ����� ȣ��
	// �����ڰ� Ŭ������ ���������� ������ �����Ϸ��� �ڵ����� �⺻ �����ڸ� �����Ѵ�.
	// C++���� ��� �ʱ�ȭ ����Ʈ�� ����Ͽ� ��� ���� �ʱ�ȭ ����
	DateClass(int year = 0, int month = 0, int day = 0) : m_year(year), m_month(month), m_day(day)
	{
		/* ��� ������ ���� ���⼭ �Ҵ��� �ʿ䰡 ���� */
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
	// C++ 11 ������ �ʱ�ȭ�� ����Ͽ� ��� �迭�� ������ �ʱ�ȭ
	// ��� �ʱ�ȭ�� �Ͽ� �ʱⰪ�� �ʿ��� ����� �ʱ�ȭ ��ų �� �ִ�
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
	// �����ڸ� ȣ�� ���� B�� ����� m_a�� �ʱ�ȭ�Ѵ�.
	B(int y) : m_a(y - 1)
	{
		std::cout << "B " << y << "\n";
	}
};

class Rect
{
private:
	double length = 1.0; // c++ 11���� �̷������� ��� �ʱ�ȭ ����
	double width{ 1.0 };
	// double width(1.0) // error
	
public:
	// �⺻�� �ʱ�ȭ���� ������ ��� �ʱ�ȭ ����Ʈ�� �켱�õȴ�!
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

	// C++ 11 ���� ���ܳ� ���
	// �����ڸ� �����Ͽ� �ڵ��� �ߺ��� ����
	// Test()�� ���� ȣ��ǰ� �� ���� Test(int value)�� ȣ���
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

	// �Ҹ���
	// ��ü�� delete Ű���带 ���� ��������� �����Ǹ� �� ���� �ڵ����� ȣ��
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
	// Ŭ������ ������ ������ �� "Ŭ������ �ν��Ͻ�ȭ" ��� �θ���
	// Ŭ���� Ÿ���� ������ "��ü" ��� �θ�
	DateClass birthday(1997, 6, 13);

	birthday.setDate(1997, 6, 13);

	// ��� �Լ� ȣ�� ��, ��� ������ ������ ��ü�� "�Ͻ�������" ���޵ȴ�.
	// std::cout << birthday.m_year << "/" << birthday.m_month << "/" << birthday.m_day;
	birthday.print();

	IntArray arr(10);

	for (int i = 0; i < arr.GetLength(); ++i)
		arr.SetValue(i, i + 1);

	std::cout << arr.GetValue(5) << "\n";

	return 0;
} // arr ��ü�� ���⼭ �����ǹǷ� ~IntArray()�� ���⼭ ȣ���