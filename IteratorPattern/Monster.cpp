#include "Monster.h"
#include <iostream>
Monster::Monster() : _name("base Monster name"), _hp(10), _atkPoint(5)
{}

Monster::Monster(std::string _name, int _hp, int _atkP) : _name(_name), _hp(_hp), _atkPoint(_atkP)
{}

std::string Monster::getName() const
{
	return _name;
}
int Monster::getHp() const
{
	return _hp;
}
int Monster::getAtkPoint() const
{
	return _atkPoint;
}

void Monster::showMonsterInfo()
{
	std::cout << "Monster name : " << getName() << std::endl;
	std::cout << "Monster hp : " << getHp() << std::endl;
	std::cout << "Monster attack point : " << getAtkPoint() << std::endl;
}