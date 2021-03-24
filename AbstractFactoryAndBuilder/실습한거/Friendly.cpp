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

void Friendly::Protect()
{
	std::cout << _name <<" Protect" << std::endl;
}

