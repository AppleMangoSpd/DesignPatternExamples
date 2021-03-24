#pragma once
#include "Observer.h"
class Notifier;

// UI 클래스가 옵저버 인터페이스 구현
class UI : public Observer
{

private:
	UI();
	~UI();

	Notifier* _notifier;

protected:
	void onNotify(EVENT event) override;
};