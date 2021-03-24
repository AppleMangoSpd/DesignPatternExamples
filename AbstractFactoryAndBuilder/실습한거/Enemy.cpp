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

void Enemy::Attack()
{
	std::cout << _name << " Attack" << std::endl;
}
