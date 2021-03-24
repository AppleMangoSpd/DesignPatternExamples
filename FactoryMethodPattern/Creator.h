#pragma once
//#include"IProduct.h"
class IProduct;

class Creator
{
public:
	virtual ~Creator();

	virtual IProduct* factoryMethod() = 0;
	void operation(IProduct* product);
};

