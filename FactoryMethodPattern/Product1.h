#pragma once
#include "IProduct.h"

class Product1 :public IProduct
{
public:
	Product1();
	
	virtual void test() override;
};

