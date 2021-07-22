#include <iostream>
#include <cstdlib> // 의사 난수 생성기(PRNG) 내장 라이브러리
#include <ctime> // std::time
#include <random> // C++ 11 새로운 난수 생성기

unsigned int RandomMaker();
void RandomTester();
int getRandomNumber(int min, int max);

int main()
{
	// seed 5323
	// std::srand(5323);

	// 초기 시드 값을 시스템 클럭으로 설정
	// std::srand(static_cast<unsigned int>(std::time(0)));

	// random library
	std::random_device rd;
	std::mt19937 mersenne(rd()); // 메르센 트위스트 알고리즘을 사용하여 난수 생성. 난수는 random_device 클래스에서 가져옴

	// 특정한 수(uniform number) 1과 6을 생성하는 난수 생성기를 재사용한다.
	std::uniform_int_distribution<>die(1, 6);

	for (int i = 1; i <= 48; ++i)
	{
		std::cout << die(mersenne) << "\t";

		if (i % 6 == 0)
			std::cout << "\n";
	}

	return 0;
}

/// <summary>
/// 시드값을 이용하여 난수 생성. 시드값에 따라 값이 정해지기 때문에 전혀 랜덤하지 않음
/// </summary>
unsigned int RandomMaker()
{
	static unsigned int seed = 5323;

	// 현재 시드에서 임의의 상수를 곱해주고 더했다.
	seed = 8253729 * seed + 2396403;

	// 시드를 가져와 0 ~ 32768 사이의 값 반환
	return seed % 32768;
}

void RandomTester()
{
	for (int i = 0; i < 50; ++i)
	{
		std::cout << std::rand() << "\t";

		if (i % 5 == 4)
			std::cout << "\n";
	}
}

/// <summary>
/// 최소값과 최대값 사이의 난수를 발생시킵니다.
/// </summary>
int getRandomNumber(int min, int max)
{
	return min + std::rand() % max;
}