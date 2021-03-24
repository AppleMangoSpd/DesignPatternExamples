#pragma once
#include <vector>
#include "EVENT.h"

class Observer;

class Notifier
{
public:
	Notifier();
	void addObserver(Observer* _addedObserver);
	void removeObserver(Observer* _removedObserver);
	void notify(EVENT event);

private:
	std::vector<Observer*>* _observerList;
};

