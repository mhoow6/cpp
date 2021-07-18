#include <iostream>

using namespace std;

int add(int x, int y)
{
	return x + y;
}

int minus(int x, int y)
{
	return x - y;
}

int multiple(int x, int y)
{
	return x * y;
}

float divide(int x, int y)
{
	return (float) x / y;
}

void DisplayResult(int x, int y, char sep, float result)
{
	cout << x << " " << sep << " " << y << " = " << result << endl;
}

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	DisplayResult(a, b, '+', add(a, b));
//	DisplayResult(a, b, '-', ::minus(a, b));
//	DisplayResult(a, b, '*', multiple(a, b));
//	DisplayResult(a, b, '/', divide(a, b));
//
//}