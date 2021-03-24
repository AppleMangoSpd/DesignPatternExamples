#pragma once
#include "IPrinterTarget.h"

class TextPrinter;

class PrinterAdapter : public IPrinterTarget
{
public:
	PrinterAdapter(TextPrinter* adapteePrinter);

	void printMessage() override;

private:
	TextPrinter * _textPrinter;
};
