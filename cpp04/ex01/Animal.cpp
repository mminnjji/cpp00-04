#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal " << type << " created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal " << type << " destroyed" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type)
{
	std::cout << "Copied Animal " << type << " created" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other) {
		type = other.type;
	}
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "WALWAL" << std::endl;
}


std::string Animal::getType() const
{
	return (this->type);
}


void Animal::setType(std::string name)
{
	this->type = name;
}