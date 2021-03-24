#include "File.h"
#include <iostream>

File::File(std::string fileName, std::string fileData)
	:_type("File"), _fileName(fileName), _fileData(fileData)
{
}

void File:: List()
{
	std::cout << "Name : " << this->GetName() << std::endl;
	
}

void File::Operation()
{
	std::cout << "Excute " << this->GetName() << std::endl;
	std::cout << "Name : " << this->GetName() << std::endl;
	std::cout << "Data : " << this->GetData() <<"\n"<< std::endl;
}

std::string File::ComponentType() const
{
	return _type;
}

std::string File::GetName() const
{
	return _fileName;
}
std::string File::GetData() const
{
	return _fileData;
}
