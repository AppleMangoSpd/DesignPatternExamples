#include "PrinterDecoratorPrefix.h"
#include <iostream>

void PrinterDecoratorPrefix:: show() 
{
	std::cout << _preStr << " ";

	PrinterDecorator::show();
}
void PrinterDecoratorPrefix::SetStr(std::string str)
{
	_preStr = str;
};