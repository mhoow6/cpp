#include <iostream>

int main()
{
	const int ArrayLength = 7;
	char name[ArrayLength] = "Korea";
	int numVowels(0); // 모음의 개수

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

	std::cout << name << "은 " << numVowels << " 개의 모음을 가지고 있습니다." << std::endl;
}