#pragma once
#include "INpcFactory.h"

class NpcFactory : public INpcFactory
{
public:
	virtual Enemy* CreateEnemy() override;
	virtual Friendly* CreateFriendly() override;
};

