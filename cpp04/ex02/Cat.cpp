#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain;
	std::cout << "Cat " << type << " created" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat " << type << " destroyed" << std::endl;
}

Cat::Cat(const Cat& other) : AAnimal(other)
{
	this->brain = new Brain(*(other.getBrain()));
	std::cout << "Copied Cat " << type << " created" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other) {
        AAnimal::operator=(other);
		if (this->brain)
			delete (this->brain);
		this->brain = new Brain(*(other.getBrain()));
    }
	std::cout << "Copied assigned Cat " << type << " created" << std::endl;
    return *this;
}

void Cat::makeSound() const 
{
	std::cout << "Meow" << std::endl;
}

std::string Cat::getBrainIdeas() const
{
    return this->brain->getIdeas()[0];
}

Brain *Cat::getBrain( void ) const
{
	return (this->brain);
}