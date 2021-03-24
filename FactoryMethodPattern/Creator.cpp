#include "Creator.h"
//#include"IProduct.h"

Creator::~Creator()
{
}



void Creator::operation(IProduct* product)
{
	product = factoryMethod();
}
