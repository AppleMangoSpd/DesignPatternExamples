#pragma once
#include <iostream>
#include "Builder.h"

class EnhancedEnemyBuilder : public Builder
{
private:
	std::string _enemyName{ "Enhanced Enemy" };
	std::string _enemyWeapon{ "Hammer" };
public:
	virtual void ConstructName(INpc* src_npc) override;
	virtual void ConstructWeapon(INpc* src_npc) override;
};

