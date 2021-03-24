#pragma once
#include <string>
#include "PrinterDecorator.h"


class PrinterDecoratorSuffix : public PrinterDecorator
{
public:
	PrinterDecoratorSuffix(PrinterDecorator *basePrinter, std::string sufStr) : PrinterDecorator(basePrinter)
	{
		_sufStr = sufStr;
	};

	virtual void show() override;

private:
	std::string _sufStr;
};
