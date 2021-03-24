#include <vector>
#include <iostream>
#include "Player.h"

int main()
{
	Player* testPlayer = new Player();

	bool isRunning = true;
	int input = 0;

	while (isRunning)
	{
		std::cout << "\n";
		std::cout << "1. 점수 +10" << std::endl;
		std::cout << "2. 레벨 +1" << std::endl;
		std::cout << "3. 강화 +1" << std::endl;
		std::cout << "4. 현재 스탯보기" << std::endl;
		std::cout << "5. 종료" << std::endl;
		std::cin >> input;

		switch (input)
		{
		case 1:
			testPlayer->ScoreUp(10);
			break;
		case 2:
			testPlayer->LevelUp(1);
			break;
		case 3:
			testPlayer->Reinforce(1);
			break;
		case 4:
			testPlayer->CurrentSpec();
			break;
		case 5:
			isRunning = false;
			break;
		default:
			std::cout << "1에서 5 사이의 숫자만 입력 가능합니다." << std::endl;
			break;
		}
		std::cout << "\n";
	}

	delete testPlayer;
}
