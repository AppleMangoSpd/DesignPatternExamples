#pragma once
#include <iostream>

class INpc
{
public:
	virtual ~INpc() {};

	virtual std::string GetName() const = 0;
	virtual void SetName(std::string name) = 0;

	virtual std::string GetWeapon() const = 0;
	virtual void SetWeapon(std::string weapon) = 0;

};
