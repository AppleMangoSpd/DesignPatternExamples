#pragma once
#include "IProduct.h"

class Product2 : public IProduct
{
public:
	Product2();

	virtual void test() override;
};

