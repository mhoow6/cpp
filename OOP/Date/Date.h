#pragma once
// 헤더에는 클래스의 선언만 넣는다.
// 짧은 구현(정의)은 넣어도 됨

// 오픈 소스 라이브러리 빼고는 코드를 제공할 때 컴파일된 라이브러리 파일과 헤더 파일만 제공한다.
// [이유 1] 필요할 때마다 다시 컴파일하는 것보다 미리 컴파일된 라이브러리 연결을 하는 것이 더 빠름
// [이유 2] 미리 컴파일된 라이브러리는 다른 애플리케이션에 의해 공유가능
// [이유 3] 코드를 훔치지 못하도록 함
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

	// 멤버 함수 뒤에 const 키워드를 추가하여 상수 멤버 함수로 만듬
	int GetDay() const { return m_Day; }

	// 함수 오버로딩을 통하여 비-상수 버젼으로 오버로딩가능
	int GetDay(){ return m_Day; }
};

