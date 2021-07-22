#include <iostream>
#include <cstdlib> // �ǻ� ���� ������(PRNG) ���� ���̺귯��
#include <ctime> // std::time
#include <random> // C++ 11 ���ο� ���� ������

unsigned int RandomMaker();
void RandomTester();
int getRandomNumber(int min, int max);

int main()
{
	// seed 5323
	// std::srand(5323);

	// �ʱ� �õ� ���� �ý��� Ŭ������ ����
	// std::srand(static_cast<unsigned int>(std::time(0)));

	// random library
	std::random_device rd;
	std::mt19937 mersenne(rd()); // �޸��� Ʈ����Ʈ �˰����� ����Ͽ� ���� ����. ������ random_device Ŭ�������� ������

	// Ư���� ��(uniform number) 1�� 6�� �����ϴ� ���� �����⸦ �����Ѵ�.
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
/// �õ尪�� �̿��Ͽ� ���� ����. �õ尪�� ���� ���� �������� ������ ���� �������� ����
/// </summary>
unsigned int RandomMaker()
{
	static unsigned int seed = 5323;

	// ���� �õ忡�� ������ ����� �����ְ� ���ߴ�.
	seed = 8253729 * seed + 2396403;

	// �õ带 ������ 0 ~ 32768 ������ �� ��ȯ
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
/// �ּҰ��� �ִ밪 ������ ������ �߻���ŵ�ϴ�.
/// </summary>
int getRandomNumber(int min, int max)
{
	return min + std::rand() % max;
}