// Standrad Template Library(표준 템플릿 라이브러리)에서 제공하는 클래스
// 프로세스의 데이터를 다른 장치에 쓰거나 읽어올 때 사용하는 클래스를 정의 -> 키보드로 입력받고 콘솔 화면에 출력 용도
#include <iostream>     
using namespace std;    // cout와 cin이 std namespace 안에 들어있음

void TestCout();
void TestCin();

int main()
{
    // cout와 cin은 미리 선언된 전역변수이다
    std::cout << "Hello World!\n";

    TestCout();

    TestCin();
}

void TestCout()
{
    int num = 23;
    const char* name = "홍길동";

    // << 연산 뒤에 피 연산자를 표현해서 출력
    // endl은 개행문자를 표현
    cout << "이름:" << name << " 번호:" << num << endl;
}

void TestCin()
{
    int num;
    char name[256];

    cout << "번호:";
    cin >> num;     // cin은 키보드로 입력한 데이터를 프로그램 변수로 입력받을 때 사용
    cout << "이름:";
    cin >> name;    //  >> 연산 뒤에 변수를 표현하면 알아서 입력

    cout << "입력한 번호는 " << num << " 이름은 " << name << "입니다." << endl;
}
