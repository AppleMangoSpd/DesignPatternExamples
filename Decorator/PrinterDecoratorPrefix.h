#pragma once
#include <string>
#include "PrinterDecorator.h"

class PrinterDecoratorPrefix : public PrinterDecorator
{
public:
	PrinterDecoratorPrefix(TextPrinter* basePrinter, std::string preStr) : PrinterDecorator(basePrinter)
	{
		_preStr = preStr;
	};

	virtual void show() override;
	void SetStr(std::string str);

private:
	std::string _preStr;
};
