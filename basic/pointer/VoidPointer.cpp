#include <iostream>

int main()
{
	// ��� ������ �ڷ����� ����Ű�� ������ (���ʸ� ������)
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

	int* iPtr = static_cast<int*>(ptr); // void �����ʹ� �������� �ڷ����� ���� ���ϱ� ������ ĳ������ �ؾ���
	
	std::cout << *iPtr << std::endl;

	return 0;
}