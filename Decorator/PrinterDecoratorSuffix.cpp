#include "PrinterDecoratorSuffix.h"
#include <iostream>


void PrinterDecoratorSuffix::show()
{
	PrinterDecorator::show();
	std::cout << " " << _sufStr << std::endl;
};