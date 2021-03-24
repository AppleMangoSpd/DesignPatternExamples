#include "NpcFactory.h"
#include "Enemy.h"
#include "Friendly.h"
Enemy * NpcFactory::CreateEnemy()
{
	return new Enemy;
}

Friendly * NpcFactory::CreateFriendly()
{
	return new Friendly;
}
