#pragma once

class Enemy;
class Friendly;
class EnhancedEnemy;

class INpcFactory
{
public:
	virtual ~INpcFactory() {};

	virtual Enemy* CreateEnemy() = 0;
	virtual Friendly* CreateFriendly() = 0;
	virtual EnhancedEnemy* CreateEnhancedEnemy() = 0;

};

