#include <iostream>


enum class MonsterSpawnLoc
{
	NORTH,
	SOUTH
};

struct MonsterInfo
{
	uint16_t id;
	MonsterSpawnLoc loc;
	float hp;
	float attack_min_damage;

	// C++ 11부터 멤버 변수에 기본값 지정가능
	float attack_max_damage = 0;
};


int main()
{
	MonsterInfo slimeInfo;
	slimeInfo.id = 1000;
	slimeInfo.hp = 100;
	slimeInfo.attack_min_damage = 10;
	slimeInfo.attack_max_damage = 20;

	// C++ 11부터 Initalizer list를 사용하여 이런식으로 초기화 가능
	// 초깃값을 지정하지 않으면 그 자료형의 초기값을 사용
	MonsterInfo hillcurlInfo{ 1001, MonsterSpawnLoc::NORTH, 100, 15 };

}