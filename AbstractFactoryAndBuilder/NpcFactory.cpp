#include "NpcFactory.h"
#include "Enemy.h"
#include "Friendly.h"
#include "EnhancedEnemy.h"

Enemy * NpcFactory::CreateEnemy()
{
	return new Enemy();
}

Friendly * NpcFactory::CreateFriendly()
{
	return new Friendly();
}

EnhancedEnemy * NpcFactory::CreateEnhancedEnemy()
{
	return new EnhancedEnemy();
}
