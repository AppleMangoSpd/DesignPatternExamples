#include "MonsterManager.h"
#include "MonsterIterator.h"
#include <iostream>

int main()
{
	Monster* testMonster1 = new Monster("test1", 10, 5);
	Monster* testMonster2 = new Monster("test2", 20, 10);
	Monster* testMonster3 = new Monster("test3", 30, 15);

	MonsterManager* testManager = new MonsterManager();

	Iterator* testIter = new MonsterIterator(testManager);

	testManager->assign(testMonster1);
	testManager->assign(testMonster2);
	testManager->assign(testMonster3);

	std::cout << testManager->size() << std::endl;

	for (Iterator* iter = testIter->first();
		iter->hasNext(); iter = iter->next())
	{
		iter->currentValue();
		std::cout << std::endl;
	}
	delete testMonster1;
	delete testMonster2;
	delete testMonster3;

	delete testManager;

	delete testIter;
}