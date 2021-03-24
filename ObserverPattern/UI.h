#pragma once
#include "Observer.h"
class Notifier;

// UI Ŭ������ ������ �������̽� ����
class UI : public Observer
{

private:
	UI();
	~UI();

	Notifier* _notifier;

protected:
	void onNotify(EVENT event) override;
};