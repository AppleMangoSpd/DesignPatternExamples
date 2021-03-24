#pragma once
#include <iostream>
#include "Builder.h"

class BasicEnemyBuilder : public Builder
{
private:
	std::string _enemyName{ "Basic Enemy" };
	std::string _enemyWeapon{ "Sword" };
public:
	virtual void ConstructName(INpc* src_npc) override;
	virtual void ConstructWeapon(INpc* src_npc) override;
};

