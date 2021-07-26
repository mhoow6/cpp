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

	// �����Ϸ���
	// void SetID(const Simple* this, int id)�� ��ȯ�Ѵ�.
	// this �����ʹ� ��� �Լ��� ȣ��� ��ü�� �ּҸ� ����Ű�� ������ ������
	// ��� ��� �Լ��� �Լ��� ȣ��� ��ü�� ����Ű�� this �����͸� ������ �ִٴ� ��
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

// ��� �Լ� ü�̴�
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

	// �����Ϸ���
	// simple(SetID, &simple, 2); �� ��ȯ�Ѵ�.
	simple.SetID(2);
	
	Calc calc;

	// �ڱ� �ڽ��� �����ϸ� ���� �̷��� ���ص� �ȴ�.
	/*calc.Add(5);
	calc.Sub(3);
	calc.Mul(4);*/

	calc.Add(5).Sub(3).Mul(4);
}