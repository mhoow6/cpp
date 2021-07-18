#include <iostream>

int main()
{
	enum SwordType
	{
		DAGGER,
		STRAIGHT,
		GREAT
	};

	enum ShieldType
	{
		SMALL,
		MEDIUM,
		BIG
	};

	SwordType sword = DAGGER;
	ShieldType shield = SMALL;

	// ����ü�� �Ͻ������� ������ ��ȯ�Ͽ� ���ϱ� ������ ���ϴ� ����� ��Ÿ�� �� ����. �׸��� �̷� ����� �ٶ�� �� ��
	// �׷��� C++ 11���� ���°� ���� ���� ����ü enum class
	if (sword == shield)
		std::cout << "Why Shield and Sword is Same?? You Noob!!" << std::endl;
	else
		std::cout << "How..?" << std::endl;

	enum class _SwordType
	{
		DAGGER,
		STRAIGHT,
		GREAT
	};

	enum class _ShieldType
	{
		SMALL,
		MEDIUM,
		BIG
	};

	_SwordType uSword = _SwordType::DAGGER;

	// ���� ���� �ٸ� ����ü�� ���ϴ� ���ǹ� �Ұ���
	// �Ʒ��� ���� ���� ����ü�� �񱳴� ����� �� �ִ�.
	if (uSword == _SwordType::DAGGER)
		std::cout << "Your Sword is Dagger" << std::endl;

	return 0;
}