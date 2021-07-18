#include <iostream>
#include <cstdint>

/*
* 1. int16_t
*	2 byte
*	-32,768 ~ 32,767
* 
* 2. uint16_t
*	2 byte
*	0 ~ 65535
* 
* 3. int32_t
*	4 byte
*	-2,147,483,648 ~ 2,147,483,648
* 
* 4. uint32_t
*	4 byte
*	4,294,967,295
* 
* 5. int64_t
*	8 byte
*	- 9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,808
* 
* 6. uint64_t
*	8 byte
*	0 ~ 18,446,744,073,709,551,615
* 
*/

int main()
{
	// int8_t 와 uint8_t는 시스템마다 다르게 출력할 수 있으므로 사용 지양
	int8_t name = 65;
	std::cout << name;

	return 0;
}