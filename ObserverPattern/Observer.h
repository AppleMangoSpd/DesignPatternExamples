#pragma once
#include"EVENT.h"

class Observer
{
public:
	virtual void onNotify(EVENT event) = 0;
};
