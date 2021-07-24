#include <iostream>

int main()
{
	const float PI = 3.14f;
	const float* piPointer{ nullptr };
	piPointer = &PI;

	float fadeSpeed = 1.0f;
	const float* fadePointer = &fadeSpeed;
	// *fadePointer = 2.0f; // const 포인터이므로 값 수정 불가

	return 0;
}