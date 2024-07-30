#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria created\n";
}

AMateria::AMateria(std::string const &type) : type(type)
{
	std::cout << "AMateria" << type << "created\n";
}

AMateria::~AMateria()
{
	std::cout << "AMateria destroyed\n";
}

AMateria::AMateria(AMateria& other) : type(other.type)
{
	std::cout << "AMateria copied\n";
}

AMateria& AMateria::operator=(AMateria const &other)
{
	if (this != &other) {
		// if (!this->type)
		// 	delete this->type;
        // this->type = other.getType();
    }
    return *this;
}

const std::string & AMateria::getType() const
{
	return(this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria used on " << target.getName() << std::endl;
}