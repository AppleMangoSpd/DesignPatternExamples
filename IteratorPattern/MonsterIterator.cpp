#include "MonsterIterator.h"
#include "MonsterManager.h"

MonsterIterator::MonsterIterator(MonsterManager* input) : _monsterManager(input), _index(0)
{}

MonsterIterator::~MonsterIterator()
{
	delete _monsterManager;
}

Iterator* MonsterIterator::first()
{
	MonsterIterator* _returnIter = new MonsterIterator(_monsterManager);
	_returnIter->setIndex(0);

	return _returnIter;
}
Iterator* MonsterIterator::last()
{
	MonsterIterator* _returnIter = new MonsterIterator(_monsterManager);
	_returnIter->setIndex(_monsterManager->size() - 1);

	return _returnIter;
}

Iterator* MonsterIterator::next()
{
	if (this->hasNext())
	{
		++_index;
		MonsterIterator* _returnIter = new MonsterIterator(_monsterManager);
		_returnIter->setIndex(_index);

		return _returnIter;
	}
	else
	{
		return nullptr;
	}
}

Iterator * MonsterIterator::current()
{
	MonsterIterator* _returnIter = new MonsterIterator(_monsterManager);
	_returnIter->setIndex(_index);

	return _returnIter;
}

void MonsterIterator::currentValue()
{
	Monster* _output;
	_output = this->CurrentMonster();
	_output->showMonsterInfo();
}

bool MonsterIterator::hasNext()
{
	if (this->_index != _monsterManager->size())
	{
		return true;
	}
	else
	{
		return false;
	}
}

void MonsterIterator::setIndex(int _input)
{
	_index = _input;
}

int MonsterIterator::getIndex() const
{
	return _index;
}

Monster* MonsterIterator::CurrentMonster()
{
	return _monsterManager->at(_index);
}