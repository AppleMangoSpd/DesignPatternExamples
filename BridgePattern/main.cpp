#include "AdvancedMonster.h"
#include "AiTier1.h"
#include "AiTier2.h"

int main()
{
	AiTier1* testTier1 = new AiTier1();
	AiTier2* testTier2 = new AiTier2();

	AdvancedMonster* test = new AdvancedMonster(testTier1);
	test->Act();

	test->ChangeAi(testTier2);
	test->Act();

	delete test;
	delete testTier1;
	delete testTier2;
}

