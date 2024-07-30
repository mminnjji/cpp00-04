#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal " << type << " created" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal " << type << " destroyed" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) : type(other.type)
{
	std::cout << "Copied AAnimal " << type << " created" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	if (this != &other) {
		type = other.type;
	}
	return (*this);
}

std::string AAnimal::getType() const
{
	return (this->type);
}


void AAnimal::setType(std::string name)
{
	this->type = name;
}