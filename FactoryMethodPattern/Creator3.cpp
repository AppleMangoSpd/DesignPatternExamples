#include "Creator3.h"
#include"Product3.h"

IProduct* Creator3::factoryMethod()
{
	return new Product3();
}