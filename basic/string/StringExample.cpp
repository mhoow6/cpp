#include <iostream>
#include <string>

int main()
{
	std::string myName;
	int myAge;

	std::cout << "Enter your Age: ";
	std::cin >> myAge;

	// cin�� \n ���� ĸ���ϱ� ������ cin ���� ���� ���� �� ��Ʈ������ \n�� �����ؾ���
	std::cin.ignore();

	std::cout << "Enter your Name: ";

	// >> �����ڴ� ù ��° ��������� ��ȯ�ؼ� ���� ���� ���ڿ� �Է½� ���� �߻�
	std::cin >> myName;

	// ���ڿ� ��ü�� getline �Լ��� ����Ͽ� �Է¹���
	std::getline(std::cin, myName);

	std::cout << "�̸�: " << myName << std::endl;
	std::cout << "����: " << myAge;


	std::string a("45");
	std::string b("11");

	std::cout << a + b << std::endl;
	a += "is not Number";
	std::cout << a;

	return 0;
}