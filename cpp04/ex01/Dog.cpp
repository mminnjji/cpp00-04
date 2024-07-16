#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog " << type << " created" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog " << type << " destroyed" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Copied Dog " << type << " created" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other) {
        Animal::operator=(other);
    }
	std::cout << "Copied assigned Dog " << type << " created" << std::endl;
    return *this;
}

void Dog::makeSound() const
{
	std::cout << "Bow Wow" << std::endl;
}
