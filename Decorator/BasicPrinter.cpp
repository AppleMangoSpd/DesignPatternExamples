#include "BasicPrinter.h"
#include <iostream>

BasicPrinter::BasicPrinter(std::string str)
{
	_baseStr = str;
};

void BasicPrinter::show()
{
	std::cout << _baseStr;
}