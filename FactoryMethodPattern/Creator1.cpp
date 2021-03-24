#include "Creator1.h"
#include"Product1.h"

IProduct* Creator1::factoryMethod()
{
	return new Product1();
}
