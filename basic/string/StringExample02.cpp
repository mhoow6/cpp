#include <iostream>

int main()
{
	char myString[] = "string"; // ���� �ι���(\0)�� �߰��ȴ�.
	// myString = "hello"; // error

	std::cout << myString;

	char name[255];
	std::cout << "Enter your name: ";
	std::cin.getline(name, 255); // 254�ڱ����� name���� �д´�.
	std::cout << "You entered: " << name << "\n";
}