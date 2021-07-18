#include <bitset>
#include <iostream>

int main()
{
	std::bitset<8> bits(0x1); // 0000 0001

	// ��Ʈ �ϳ� ���� ����
	bits.set(0x4); // 0001 0001

	// ���� ��Ʈ ������
	bits.flip(0x1); // 0001 0000

	// ���� ��Ʈ 0����
	bits.reset(0x4); // 0000 0000

	bits.set(0x2);

	std::cout << "2��° ������ �����ֳ���? " << bits.test(0x2) << std::endl;
}