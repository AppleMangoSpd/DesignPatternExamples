#pragma once
#include "INpc.h"

class Enemy : public INpc
{
protected:
	std::string _name{ "null" };
	std::string _weapon{ "null" };
public:
	virtual ~Enemy() {};
	virtual std::string GetName() const override;
	virtual void SetName(std::string name) override;
	
	virtual std::string GetWeapon() const override;
	virtual void SetWeapon(std::string weapon) override;

	void Attack();
};

