#include "Creator.h"
#include "Creator1.h"
#include "Creator2.h"
#include "Creator3.h"
#include "Creator4.h"
#include "Product1.h"
#include "Product2.h"
#include "Product3.h"
#include "Product4.h"


int main()
{
	Creator1* newFactory1 = new Creator1();
	Product1* testProduct1 = nullptr;
	newFactory1->operation(testProduct1);

	Creator2* newFactory2 = new Creator2();
	Product2* testProduct2 = nullptr;
	newFactory2->operation(testProduct2);

	Creator3* newFactory3 = new Creator3();
	Product3* testProduct3 = nullptr;
	newFactory3->operation(testProduct3);

	Creator4* newFactory4 = new Creator4();
	Product4* testProduct4 = nullptr;
	newFactory4->operation(testProduct4);


	delete testProduct1;
	delete testProduct2;
	delete testProduct3;
	delete testProduct4;
	delete newFactory1;
	delete newFactory2;
	delete newFactory3;
	delete newFactory4;
}