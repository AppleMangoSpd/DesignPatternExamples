#pragma once
#include "Component.h"
#include <vector>

class Directory : public Component
{
public:
	Directory(std::string name);
	~Directory();

	void Add(Component* obj);

	void List() override;

	void Operation() override;

	std::string ComponentType() const override;

	std::string GetName() const override;
private:
	std::string _type;
	std::vector<Component*>* _table;
	std::string _directoryName;
};

