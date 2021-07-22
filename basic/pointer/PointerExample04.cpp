#include <iostream>

int main()
{
	const int ArrayLength = 7;
	char name[ArrayLength] = "Korea";
	int numVowels(0); // ������ ����

	for (char* ptr = name; ptr < name + ArrayLength; ++ptr)
	{
		switch (*ptr)
		{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			++numVowels;
			break;
		}
	}

	std::cout << name << "�� " << numVowels << " ���� ������ ������ �ֽ��ϴ�." << std::endl;
}