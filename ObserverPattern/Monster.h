#pragma once
#include "Npc.h"
#include "Observer.h"

class Notifier;

// ���� Ŭ������ ������ �������̽� ����.
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
