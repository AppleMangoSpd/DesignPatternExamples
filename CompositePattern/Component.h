#pragma once
#include <string>

class Component
{
public:
	virtual void List() = 0;
	virtual void Operation() = 0;
	virtual std::string ComponentType() const = 0;
	virtual std::string GetName() const = 0;
};