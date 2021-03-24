#include <iostream>
#include "BasicPrinter.h"
#include "PrinterDecoratorSuffix.h"
#include "PrinterDecoratorPrefix.h"
#include "PrinterAdapter.h"
int main()
{
	TextPrinter* testPrinter = new BasicPrinter("mid");
	testPrinter->show();

	std::cout << "\n\n----------------------\n" << std::endl;

	PrinterDecorator* testPre = new PrinterDecoratorPrefix(testPrinter, "top");
	testPre->show();

	std::cout << "\n\n----------------------\n" << std::endl;

	PrinterDecorator* testSuf = new PrinterDecoratorSuffix(testPre, "bot");
	testSuf->show();

	std::cout << "\n\n----------------------\n" << std::endl;

	IPrinterTarget* testAdapter = new PrinterAdapter(testSuf);
	testAdapter->printMessage();

	//delete 다 해주고 클래스 나눠주기

	delete testPrinter;
	delete testPre;
	delete testSuf;
	delete testAdapter;

	return 0;
}