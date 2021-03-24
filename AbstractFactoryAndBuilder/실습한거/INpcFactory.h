#pragma once

class Enemy;

class Friendly;

class INpcFactory
{
public:
	virtual ~INpcFactory() {};

	virtual Enemy* CreateEnemy() = 0;
	virtual Friendly* CreateFriendly() = 0;


};

