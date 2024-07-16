#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat " << type << " created" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat " << type << " destroyed" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Copied Cat " << type << " created" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other) {
        Animal::operator=(other);
    }
	std::cout << "Copied assigned Cat " << type << " created" << std::endl;
    return *this;
}

void Cat::makeSound() const 
{
	std::cout << "Meow" << std::endl;
}
