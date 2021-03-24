#include "Monster.h"
#include "Notifier.h"


Monster::Monster()
{
	_notifier = new Notifier();
	_notifier->addObserver(this);
}


Monster::~Monster()
{
	_notifier->removeObserver(this);
	delete _notifier;
}

void Monster::onNotify(EVENT event)
{
	if (event == EVENT::PlayerDeath)
	{
		// 승리 모션 출력
	}
}