#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat " << type << " created" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat " << type << " destroyed" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "Copied WrongCat " << type << " created" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other) {
        WrongAnimal::operator=(other);
    }
	std::cout << "Copied assigned WrongCat " << type << " created" << std::endl;
    return *this;
}

void WrongCat::makeSound() const 
{
	std::cout << "WrongMeow" << std::endl;
}
