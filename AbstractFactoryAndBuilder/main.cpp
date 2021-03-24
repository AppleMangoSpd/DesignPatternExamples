#include "NpcFactory.h"
#include "Enemy.h"
#include "EnhancedEnemy.h"
#include "Friendly.h"
#include "BasicEnemyBuilder.h"
#include "BasicFriendlyBuilder.h"
#include "EnhancedEnemyBuilder.h"
#include "Director.h"

int main()
{
	NpcFactory* testFactory1 = new NpcFactory();

	Enemy* enemy1 = testFactory1->CreateEnemy();
	EnhancedEnemy* enemy2 = testFactory1->CreateEnhancedEnemy();

	Friendly* friendly1 = testFactory1->CreateFriendly();
	
	Director* testDirector = new Director();
	
	BasicFriendlyBuilder* BasicFBuilder = new BasicFriendlyBuilder();
	BasicEnemyBuilder* BasicEBuilder = new BasicEnemyBuilder();
	EnhancedEnemyBuilder* EnhancedEBuilder = new EnhancedEnemyBuilder();

	//enemy1를 BasicEnemy로 설정
	testDirector->SetNpcBuilder(BasicEBuilder);
	testDirector->SetNpc(enemy1);
	testDirector->ConstructNpc();

	//friendly1을 BasicFriendly로 설정
	testDirector->SetNpcBuilder(BasicFBuilder);
	testDirector->SetNpc(friendly1);
	testDirector->ConstructNpc();

	//enemy2를 EnhancedEnemy로 설정
	testDirector->SetNpcBuilder(EnhancedEBuilder);
	testDirector->SetNpc(enemy2);
	testDirector->ConstructNpc();

	enemy1->Attack();
	enemy2->Attack();
	enemy2->Smite();
	friendly1->Protect();
	
	delete testFactory1;

	delete enemy1;
	delete enemy2;
	delete friendly1;

	delete testDirector;

	delete BasicFBuilder;
	delete BasicEBuilder;
	delete EnhancedEBuilder;
}