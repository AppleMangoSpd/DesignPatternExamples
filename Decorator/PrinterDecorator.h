#pragma once
#include "TextPrinter.h"

class PrinterDecorator : public TextPrinter
{
public:
	PrinterDecorator(TextPrinter* basePrinter);

	virtual void show() override;

private:
	TextPrinter * _basePrinter;
};
