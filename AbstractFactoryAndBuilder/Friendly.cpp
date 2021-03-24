#include "Friendly.h"
#include <string>
std::string Friendly::GetName() const
{
	return _name;
}

void Friendly::SetName(std::string name)
{
	_name = name;
}

std::string Friendly::GetWeapon() const
{
	return _weapon;
}

void Friendly::SetWeapon(std::string weapon)
{
	_weapon = weapon;
}

void Friendly::Protect()
{
	std::cout << _name <<" Protect with " << _weapon << std::endl;
}

