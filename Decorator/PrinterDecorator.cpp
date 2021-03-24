#include "PrinterDecorator.h"

PrinterDecorator::PrinterDecorator(TextPrinter* basePrinter)
{
	_basePrinter = basePrinter;
}

void PrinterDecorator::show()
{
	_basePrinter->show();
}