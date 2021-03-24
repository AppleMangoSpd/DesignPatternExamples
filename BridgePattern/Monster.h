#pragma once

class IAi;

class Monster
{
public:
	Monster() {}
	Monster(IAi* ai) : monsterAi(ai) {}

	virtual void Act() = 0;
	virtual void ChangeAi(IAi* newAi) = 0;
protected:
	IAi* monsterAi;
};

