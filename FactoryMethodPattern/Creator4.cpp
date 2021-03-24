#include "Creator4.h"
#include"Product4.h"

IProduct* Creator4::factoryMethod()
{
	return new Product4();
}
