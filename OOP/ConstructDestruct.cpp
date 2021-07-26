#include <iostream>

/* RAII (Resource Acquisition Is Initalization) 프로그래밍 디자인 기법
 * 리소스 (메모리, 파일, 데이터베이스 핸들 등)은 일반적으로 객체의 생성자에서 흭득
 * 객체가 소멸할 때는 자원이 소멸해야 한다.
 * std::string 및 std::vector가 RAII을 따르는 클래스
 */

class Simple
{
private:
	int m_id;

public:
	Simple(int id) : m_id(id)
	{
		std::cout << "생성자 Simple 호출 [ID: " << m_id << "]" << std::endl;
	}

	~Simple()
	{
		std::cout << "소멸자 Simple 호출 [ID: " << m_id << "]" << std::endl;
	}

	int GetID()
	{
		return m_id;
	}
};

int main()
{
	// 스택에 객체 할당
	Simple simple(1);
	std::cout << simple.GetID() << std::endl;

	// 힙에 객체 할당
	Simple* pSimple = new Simple(2);
	std::cout << pSimple->GetID() << std::endl;

	delete pSimple;

	return 0;
}