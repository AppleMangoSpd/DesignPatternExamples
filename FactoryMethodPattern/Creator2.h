#pragma once
#include "Creator.h"
class Creator2 : public Creator
{
public:
	virtual IProduct* factoryMethod() override;
};

