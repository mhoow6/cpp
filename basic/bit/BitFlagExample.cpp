#include <iostream>

void StateDistinguish(unsigned char myState, unsigned char check);

int main()
{
	const unsigned char IDLE = 1 << 0;
	const unsigned char WALK = 1 << 1;
	const unsigned char RUN = 1 << 2;
	const unsigned char INJURED = 1 << 3;
	const unsigned char DEAD = 1 << 4;
	const unsigned char ATTACK_BUFF = 1 << 5;
	const unsigned char DEF_BUFF = 1 << 6;

	unsigned char state = 0;

	// 1. IDLE 상태이면서 공격버프가 걸린 상태
	// [STATE]			0000 0000
	// [IDLE]			0000 0001
	// [ATTACK_BUFF]	0100 0000
	// [DEF_BUFF]		1000 0000
	//					1100 0001
	state |= IDLE | ATTACK_BUFF | DEF_BUFF;

	// 2. 방어버프는 풀린 상태
	// [STATE]			1100 0001
	// [~DEF_BUFF]		0111 1111
	//					0100 0001
	state &= ~DEF_BUFF;

	
	std::cout << "현재 나는 공격버프가 걸려있습니까? ";
	StateDistinguish(state, ATTACK_BUFF);
}

void StateDistinguish(unsigned char myState, unsigned char check)
{
	if (static_cast<bool>(myState & check))
		std::cout << "걸려있다. ";
	else
		std::cout << "안 걸려있다. ";
	
}