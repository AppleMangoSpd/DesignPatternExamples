#pragma once
#include "Npc.h"
#include "Observer.h"

class Notifier;

// 몬스터 클래스가 옵저서 인터페이스 구현.
class Monster : public Npc, public Observer
{
//private:
public:
	//UI()
	Monster();
	//~UI()
	~Monster();

	Notifier* _notifier;

protected:
	void onNotify(EVENT event) override;
};
