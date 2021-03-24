#pragma once
class Iterator
{
public:
	virtual Iterator* first() = 0;
	virtual Iterator* last() = 0;
	virtual Iterator* next() = 0;
	virtual Iterator* current() = 0;
	virtual void currentValue() = 0;
	virtual bool hasNext() = 0;

	//Iterator & operator++()
	//{
	//	return *(this->next());
	//}
	//bool operator!=(Iterator& right)
	//{
	//	if (this->current() != right.current())
	//	{
	//		return false;
	//	}
	//	return true;
	//}
};

