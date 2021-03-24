#pragma once
#include "Creator.h"

class Creator1 : public Creator
{
public:
	virtual IProduct* factoryMethod() override;
};

