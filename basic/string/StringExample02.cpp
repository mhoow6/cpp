#include <iostream>

int main()
{
	char myString[] = "string"; // 끝에 널문자(\0)가 추가된다.
	// myString = "hello"; // error

	std::cout << myString;

	char name[255];
	std::cout << "Enter your name: ";
	std::cin.getline(name, 255); // 254자까지만 name으로 읽는다.
	std::cout << "You entered: " << name << "\n";
}