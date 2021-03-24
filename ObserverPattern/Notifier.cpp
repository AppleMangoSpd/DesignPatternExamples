#include "Notifier.h"
#include "Observer.h"

Notifier::Notifier()
{
	_observerList = new std::vector<Observer*>;
}

void Notifier::addObserver(Observer* _addedObserver)
{
	_observerList->push_back(_addedObserver);
};
void Notifier::removeObserver(Observer* _removedObserver)
{
	_observerList->clear();
	delete _observerList;
};
void Notifier::notify(EVENT event)
{
	_observerList->back()->onNotify(event);
}