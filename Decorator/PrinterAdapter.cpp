#include "PrinterAdapter.h"
#include "TextPrinter.h"

PrinterAdapter::PrinterAdapter(TextPrinter* adapteePrinter)
{
	_textPrinter = adapteePrinter;
};

void PrinterAdapter::printMessage()
{
	_textPrinter->show();
}