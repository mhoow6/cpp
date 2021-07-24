#include <iostream>

int main()
{
	// 모든 데이터 자료형을 가리키는 포인터 (제너릭 포인터)
	void* ptr;

	int nValue = 0;
	float fValue;

	struct Something
	{
		int n;
		float f;
	};

	Something sValue;

	ptr = &nValue;
	// ptr = &fValue;
	// ptr = &sValue;

	int* iPtr = static_cast<int*>(ptr); // void 포인터는 데이터의 자료형을 알지 못하기 때문에 캐스팅을 해야함
	
	std::cout << *iPtr << std::endl;

	return 0;
}