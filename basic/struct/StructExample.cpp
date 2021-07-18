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

	// C++ 11���� ��� ������ �⺻�� ��������
	float attack_max_damage = 0;
};


int main()
{
	MonsterInfo slimeInfo;
	slimeInfo.id = 1000;
	slimeInfo.hp = 100;
	slimeInfo.attack_min_damage = 10;
	slimeInfo.attack_max_damage = 20;

	// C++ 11���� Initalizer list�� ����Ͽ� �̷������� �ʱ�ȭ ����
	// �ʱ갪�� �������� ������ �� �ڷ����� �ʱⰪ�� ���
	MonsterInfo hillcurlInfo{ 1001, MonsterSpawnLoc::NORTH, 100, 15 };

}