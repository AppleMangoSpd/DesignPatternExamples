#include "Directory.h"
#include <iostream>

Directory::Directory(std::string name) : _type("Directory"), _directoryName(name)
{
	_table = new std::vector<Component*>();
}

Directory::~Directory()
{
	_table->clear();

	delete _table;
}

void Directory::Add(Component* obj)
{
	_table->push_back(obj);
}

void Directory::List() 
{
	std::cout << _directoryName << " list : " << std::endl;

	for (
		std::vector<Component*>::const_iterator it = _table->begin();
		it != _table->end();
		++it
		)
	{
		std::cout << "\t";
		if ((*it)->ComponentType() == "Directory")
		{
			std::cout << (*it)->GetName() << std::endl;
		}
		else
		{
			(*it)->List();
		}
		std::cout << "\n";
	}
}

void Directory::Operation() 
{
	this->List();
}

std::string Directory::ComponentType() const
{
	return _type;
}

std::string Directory::GetName() const
{
	return _directoryName;
}