#pragma once
// ������� Ŭ������ ���� �ִ´�.
// ª�� ����(����)�� �־ ��

// ���� �ҽ� ���̺귯�� ����� �ڵ带 ������ �� �����ϵ� ���̺귯�� ���ϰ� ��� ���ϸ� �����Ѵ�.
// [���� 1] �ʿ��� ������ �ٽ� �������ϴ� �ͺ��� �̸� �����ϵ� ���̺귯�� ������ �ϴ� ���� �� ����
// [���� 2] �̸� �����ϵ� ���̺귯���� �ٸ� ���ø����̼ǿ� ���� ��������
// [���� 3] �ڵ带 ��ġ�� ���ϵ��� ��
class Date
{
private:
	int m_Year;
	int m_Month;
	int m_Day;

public:
	Date(int year, int month, int day);
	void SetDate(int year, int month, int day);

	int GetYear() { return m_Year; }
	int GetMonth() { return m_Month; }

	// ��� �Լ� �ڿ� const Ű���带 �߰��Ͽ� ��� ��� �Լ��� ����
	int GetDay() const { return m_Day; }

	// �Լ� �����ε��� ���Ͽ� ��-��� �������� �����ε�����
	int GetDay(){ return m_Day; }
};

