#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

Cure::Cure() : type("cure")
{
	std::cout << this->type << " constructed\n";
}

Cure::~Cure()
{
	std::cout << this->type << " destroyed\n";
}

Cure::Cure(Cure const & other) : type(other.getType())
{
	std::cout << this->type << " constructed from copy\n";
}

Cure & Cure::operator=(Cure const & other)
{
	std::cout << "Assigned from " << other.getType() << std::endl;
	return (*this);
}

std::string const & Cure::getType( void ) const
{
	return (this->type);
}

Cure *Cure::clone() const
{
	Cure	*ret = new Cure;
	return (ret);
}

void Cure::use(ICharacter& target)
{
	std::string targetname = target.getName();

	std::cout << "* heals " << targetname << "\'s wounds *" << std::endl;
}