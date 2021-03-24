#include "BasicEnemyBuilder.h"
#include "INpc.h"

void BasicEnemyBuilder::ConstructName(INpc * src_npc)
{
	src_npc->SetName(_enemyName);
}

void BasicEnemyBuilder::ConstructWeapon(INpc * src_npc)
{
	src_npc->SetWeapon(_enemyWeapon);
}
