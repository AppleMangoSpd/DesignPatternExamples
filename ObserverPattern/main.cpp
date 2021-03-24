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
		std::cout << "1. ���� +10" << std::endl;
		std::cout << "2. ���� +1" << std::endl;
		std::cout << "3. ��ȭ +1" << std::endl;
		std::cout << "4. ���� ���Ⱥ���" << std::endl;
		std::cout << "5. ����" << std::endl;
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
			std::cout << "1���� 5 ������ ���ڸ� �Է� �����մϴ�." << std::endl;
			break;
		}
		std::cout << "\n";
	}

	delete testPlayer;
}
