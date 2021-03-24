#pragma once
#include "Enemy.h"

class EnhancedEnemy : public Enemy
{
public:
	virtual ~EnhancedEnemy() {};

	void Smite();
};

