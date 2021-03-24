#pragma once
#include "Monster.h"

class AdvancedMonster : public Monster
{
public:
	AdvancedMonster();
	AdvancedMonster(IAi* ai);


	void Act() override;
	
	void ChangeAi(IAi* newAi) override;

};

