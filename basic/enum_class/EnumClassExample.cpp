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

	// 열거체는 암시적으로 정수로 변환하여 비교하기 때문에 원하는 결과를 나타낼 수 없음. 그리고 이런 결과를 바라면 안 됨
	// 그래서 C++ 11부터 나온게 범위 지정 열거체 enum class
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

	// 위의 같이 다른 열거체와 비교하는 조건문 불가능
	// 아래와 같이 같은 열거체의 비교는 사용할 수 있다.
	if (uSword == _SwordType::DAGGER)
		std::cout << "Your Sword is Dagger" << std::endl;

	return 0;
}