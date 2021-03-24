#include "MonsterManager.h"
#include "MonsterIterator.h"

MonsterManager::MonsterManager()
{
	_iter = new MonsterIterator(this);
}

MonsterManager::~MonsterManager()
{
	delete _iter;
}

void MonsterManager::assign(Monster* _monster)
{
	MonsterList[_size] = _monster;
	++_size;
}
int MonsterManager::size()
{
	return _size;
}

Iterator * MonsterManager::begin()
{
	return _iter->first();
}

Iterator * MonsterManager::end()
{
	return _iter->last();
}

Iterator *MonsterManager::iterator()
{
	return _iter;
}
Monster * MonsterManager::getMonsterList() const
{
	return *MonsterList;
}
Monster * MonsterManager::at(int input)
{
	return MonsterList[input];
}
;