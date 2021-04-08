#include <iostream>
using namespace std;

/*
 * 콜론초기화 (Initialize list)
 * 생성자에 있는 특별한 기능
 *
 * 클래스명 :: 클래스명(파라미터1, 파라미터2) : 멤버변수1(파라미터1), 멤버변수2(파라미터2)
 */

class colon {
private:
	int number1;
	int number2;
public:
	void print();
	colon();
	colon(int, int);
};

void colon::print()
{
	cout << "number1: " << number1 << " number2 = " << number2 << endl;
}

colon::colon()
{
	number1 = 0, number2 = 0;
}

// 콜론초기화를 한 생성자
colon::colon(int a, int b) : number1(a), number2(b)
{

}

int main()
{
	colon x(1, 2); 
	x.print();

	colon y;
	// y.colon(2, 4); 생성자는 일반 멤버함수처럼 쓰면 안 됨
	y.print();
}
