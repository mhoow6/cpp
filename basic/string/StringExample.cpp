#include <iostream>
#include <string>

int main()
{
	std::string myName;
	int myAge;

	std::cout << "Enter your Age: ";
	std::cin >> myAge;

	// cin은 \n 또한 캡쳐하기 때문에 cin 으로 값을 읽은 후 스트림에서 \n을 제거해야함
	std::cin.ignore();

	std::cout << "Enter your Name: ";

	// >> 연산자는 첫 번째 공백까지만 반환해서 공백 포함 문자열 입력시 문제 발생
	std::cin >> myName;

	// 문자열 전체는 getline 함수를 사용하여 입력받자
	std::getline(std::cin, myName);

	std::cout << "이름: " << myName << std::endl;
	std::cout << "나이: " << myAge;


	std::string a("45");
	std::string b("11");

	std::cout << a + b << std::endl;
	a += "is not Number";
	std::cout << a;

	return 0;
}