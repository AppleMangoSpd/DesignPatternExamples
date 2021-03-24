#pragma once
#include "INpc.h"

class Enemy : public INpc
{
private:
	std::string _name{ "null" };

public:
	virtual std::string GetName() const override;
	virtual void SetName(std::string name) override;
	
	void Attack();
};

