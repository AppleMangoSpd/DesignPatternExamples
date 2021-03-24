#include "EnhancedEnemyBuilder.h"
#include "INpc.h"

void EnhancedEnemyBuilder::ConstructName(INpc * src_npc)
{
	src_npc->SetName(_enemyName);
}

void EnhancedEnemyBuilder::ConstructWeapon(INpc * src_npc)
{
	src_npc->SetWeapon(_enemyWeapon);
}
