#include "NpcFactory.h"
#include "Enemy.h"
#include "Friendly.h"

class Builder
{
public:
	virtual void ConstructName(INpc* src_npc) {};
};

class EnemyBuilder : public Builder
{
private:
	std::string _enemyName{"Basic Enemy"};

public:
	virtual void ConstructName(INpc* src_npc) override
	{
		src_npc->SetName(_enemyName);
	};
};

class Director
{
public:
	Builder* _builder;

	INpc* _returnNpc;

public:
	Director() {};
	Director(Builder* builder) 
	{
		SetNpcBuilder(builder);
	};

	void SetNpc(INpc* targetNpc)
	{
		_returnNpc = targetNpc;
	};

	void SetNpcBuilder(Builder* builder)
	{
		_builder = builder;
	}

	void ConstructNpc()
	{
		_builder->ConstructName(_returnNpc);
	
	}

	INpc* GetNpc() const
	{
		return _returnNpc;
	}
};




int main()
{
	NpcFactory* testFactory1 = new NpcFactory();

	Enemy* enemy1 = testFactory1->CreateEnemy();
	Enemy* enemy2 = testFactory1->CreateEnemy();

	Friendly* friendly1 = testFactory1->CreateFriendly();
	Friendly* friendly2 = testFactory1->CreateFriendly();

	Director* testDirctor = new Director();
	EnemyBuilder* testEBuilder = new EnemyBuilder();
	testDirctor->SetNpc(enemy1);
	testDirctor->SetNpcBuilder(testEBuilder);
	testDirctor->ConstructNpc();

	/*
	enemy1->SetName("1번 적");
	enemy2->SetName("2번 적");
	friendly1->SetName("1번 아군");
	friendly2->SetName("2번 아군");
	*/

	enemy1->Attack();
	enemy2->Attack();
	friendly1->Protect();
	friendly2->Protect();

	delete testFactory1;
	delete enemy1;
	delete enemy2;
	delete friendly1;
	delete friendly2;
}