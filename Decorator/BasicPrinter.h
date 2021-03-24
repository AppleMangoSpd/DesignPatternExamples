#pragma once
#include <string>
#include "TextPrinter.h"

class BasicPrinter : public TextPrinter
{
public:
	BasicPrinter(std::string str);

	virtual void show() override;

private:
	std::string _baseStr;
};