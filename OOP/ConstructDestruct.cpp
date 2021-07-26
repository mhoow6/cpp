#include <iostream>

/* RAII (Resource Acquisition Is Initalization) ���α׷��� ������ ���
 * ���ҽ� (�޸�, ����, �����ͺ��̽� �ڵ� ��)�� �Ϲ������� ��ü�� �����ڿ��� ŉ��
 * ��ü�� �Ҹ��� ���� �ڿ��� �Ҹ��ؾ� �Ѵ�.
 * std::string �� std::vector�� RAII�� ������ Ŭ����
 */

class Simple
{
private:
	int m_id;

public:
	Simple(int id) : m_id(id)
	{
		std::cout << "������ Simple ȣ�� [ID: " << m_id << "]" << std::endl;
	}

	~Simple()
	{
		std::cout << "�Ҹ��� Simple ȣ�� [ID: " << m_id << "]" << std::endl;
	}

	int GetID()
	{
		return m_id;
	}
};

int main()
{
	// ���ÿ� ��ü �Ҵ�
	Simple simple(1);
	std::cout << simple.GetID() << std::endl;

	// ���� ��ü �Ҵ�
	Simple* pSimple = new Simple(2);
	std::cout << pSimple->GetID() << std::endl;

	delete pSimple;

	return 0;
}