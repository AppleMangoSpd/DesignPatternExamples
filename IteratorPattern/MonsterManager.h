#pragma once
#include "Monster.h"

class Iterator;

class MonsterManager :public Monster
{
public:
	//MonsterManager() : _iter(new MonsterIterator(this))
	MonsterManager();
	~MonsterManager();


	void assign(Monster* _monster);
	int size();

	Iterator * begin();

	Iterator * end();

	Iterator * iterator();

	Monster* getMonsterList() const;

	Monster* at(int input);
private:
	Monster * MonsterList[100];

	Iterator * _iter;
	int _size = 0;
	//const int MAX = 100;

};