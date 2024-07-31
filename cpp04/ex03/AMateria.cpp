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

AMateria::AMateria(AMateria& other) : type(other.getType())
{
	std::cout << "AMateria copied\n";
}

AMateria& AMateria::operator=(AMateria const &other)
{
	const std::string rtype = other.getType();
	std::cout << "Assigned from " << rtype << std::endl;
    return *this;
}

const std::string & AMateria::getType() const
{
	return(this->type);
}

void AMateria::use(ICharacter& target)
{
	std::string rname = target.getName();
	std::cout << "AMateria used on " << rname << std::endl;
}