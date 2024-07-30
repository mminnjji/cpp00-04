#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain;
	std::cout << "Dog " << type << " created" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog " << type << " destroyed" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	this->brain = new Brain(*(other.getBrain()));
	std::cout << "Copied Dog " << type << " created" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other) {
        AAnimal::operator=(other);
		if (this->brain)
			delete (this->brain);
		this->brain = new Brain(*(other.getBrain()));
    }
	std::cout << "Copied assigned Dog " << type << " created" << std::endl;
    return *this;
}

void Dog::makeSound() const
{
	std::cout << "Bow Wow" << std::endl;
}

std::string Dog::getBrainIdeas() const
{
    return this->brain->getIdeas()[0];
}


Brain *Dog::getBrain( void ) const
{
	return (this->brain);
}