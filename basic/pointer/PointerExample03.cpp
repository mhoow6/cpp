#include <iostream>

void ChangeArray(int* ptr);

int main()
{
	int _array[5]{ 1,2,3,4,5 };
	int* iPtr (nullptr);

	// �ּҴ� int[5]Ÿ��
	std::cout << _array << "\n";
	std::cout << sizeof(_array) << "\n";

	// �ּҴ� int* Ÿ��
	std::cout << iPtr << "\n";
	std::cout << sizeof(iPtr) << "\n";

	iPtr = _array;

	ChangeArray(iPtr);

	std::cout << _array[0] << "\n"; // 6
	std::cout << _array[1] << "\n"; // 2


}

void ChangeArray(int* ptr)
{
	*ptr = 6;
}