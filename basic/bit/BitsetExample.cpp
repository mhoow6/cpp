#include <bitset>
#include <iostream>

int main()
{
	std::bitset<8> bits(0x1); // 0000 0001

	// 비트 하나 새로 지정
	bits.set(0x4); // 0001 0001

	// 지정 비트 뒤집기
	bits.flip(0x1); // 0001 0000

	// 지정 비트 0으로
	bits.reset(0x4); // 0000 0000

	bits.set(0x2);

	std::cout << "2번째 전구는 켜져있나요? " << bits.test(0x2) << std::endl;
}