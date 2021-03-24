#include "AdvancedMonster.h"
#include "IAi.h"
#include <iostream>

AdvancedMonster::AdvancedMonster()
{
	if(!monsterAi)
	std::cout << "no ai" << std::endl;
}

AdvancedMonster::AdvancedMonster(IAi * ai)
{
	//monsterAi = ai;
	ChangeAi(ai);
}

void AdvancedMonster::Act()
{
	std::cout << "Advanced Monster act" << std::endl;
	monsterAi->operation();
}

void AdvancedMonster::ChangeAi(IAi * newAi)
{
	monsterAi = newAi;
}
