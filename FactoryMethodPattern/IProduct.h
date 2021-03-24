#pragma once
class IProduct
{
public:
	virtual ~IProduct() {};
	
	virtual void test() = 0;
};

