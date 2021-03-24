#pragma once
#include "Iterator.h"

class Monster;
class MonsterManager;

class MonsterIterator : public Iterator
{
public:
	MonsterIterator(MonsterManager* input);
	~MonsterIterator();
	Iterator* first() override;
	Iterator* last() override;
	Iterator* next() override;
	Iterator* current() override;
	void currentValue() override;
	bool hasNext() override;

	void setIndex(int _input);

	int getIndex() const;

	Monster* CurrentMonster();

private:
	int _index;

	MonsterManager * _monsterManager;
};

