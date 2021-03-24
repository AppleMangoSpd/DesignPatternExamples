#pragma once
#include "Component.h"

class File : public Component
{
public:
	File(std::string fileName, std::string fileData);

	void List() override;
	void Operation() override;

	std::string ComponentType() const override;

	std::string GetName() const override;
	std::string GetData() const;

private:
	std::string _type;
	std::string _fileName;
	std::string _fileData;
};

