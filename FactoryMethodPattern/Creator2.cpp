#include "Creator2.h"
#include "Product2.h"

IProduct* Creator2::factoryMethod()
{
	return new Product2();
}

