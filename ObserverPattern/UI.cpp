#include <iostream>
#include "UI.h"
#include "Notifier.h"

UI::UI()
{
	_notifier->addObserver(this);
}


UI::~UI()
{
	_notifier->removeObserver(this);
}

void UI::onNotify(EVENT event)
{
	if (event == EVENT::PlayerDeath)
	{
		std::cout << "Game Over" << std::endl;
		// 게임 종료 메세지 출력.
	}
}