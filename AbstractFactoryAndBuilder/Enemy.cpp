#include "Enemy.h"
#include <string>

std::string Enemy::GetName() const
{
	return _name;
}

void Enemy::SetName(std::string name)
{
	_name = name;
}

std::string Enemy::GetWeapon() const
{
	return this->_weapon;
}

void Enemy::SetWeapon(std::string weapon)
{
	_weapon = weapon;
}

void Enemy::Attack()
{
	std::cout << _name << " Attack with " << _weapon << std::endl;
}
