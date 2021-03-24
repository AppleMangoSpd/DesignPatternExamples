#pragma once
#include <string>
class Monster
{
public:
	Monster();

	Monster(std::string _name, int _hp, int _atkP);

	std::string getName() const;
	int getHp() const;
	int getAtkPoint() const;
	void showMonsterInfo();
private:
	std::string _name;
	int _hp;
	int _atkPoint;
};