#include <iostream>

class Simple
{
private:
	int m_ID;

public:
	Simple(int id)
	{
		SetID(id);
	}

	// 컴파일러는
	// void SetID(const Simple* this, int id)로 변환한다.
	// this 포인터는 멤버 함수가 호출된 객체의 주소를 가리키는 숨겨진 포인터
	// 모든 멤버 함수는 함수가 호출된 객체를 가리키는 this 포인터를 가지고 있다는 것
	void SetID(int id)
	{
		m_ID = id;
		// this->m_ID = id;
	}

	int GetID()
	{
		return m_ID;
	}
};

// 멤버 함수 체이닝
class Calc
{
private:
	int m_Value = 0;
public:
	Calc& Add(int value) { m_Value += value; return *this; }
	Calc& Sub(int value) { m_Value -= value; return *this; }
	Calc& Mul(int value) { m_Value *= value; return *this; }

	int GetValue() { return m_Value; }
};


int main()
{
	Simple simple(1);

	// 컴파일러는
	// simple(SetID, &simple, 2); 로 변환한다.
	simple.SetID(2);
	
	Calc calc;

	// 자기 자신을 리턴하면 굳이 이렇게 안해도 된다.
	/*calc.Add(5);
	calc.Sub(3);
	calc.Mul(4);*/

	calc.Add(5).Sub(3).Mul(4);
}