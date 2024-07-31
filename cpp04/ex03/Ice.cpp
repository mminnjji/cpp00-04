#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

Ice::Ice() : type("ice")
{
	std::cout << this->type << " created\n";
}

Ice::~Ice()
{
	std::cout << this->type << " destroyed\n";
}

Ice::Ice(Ice const & other) : type(other.getType())
{
	std::cout << this->type << " constructed from copy\n";
}

Ice & Ice::operator=(Ice const & other)
{
	const std::string rtype = other.getType();
	std::cout << "Assigned from " << rtype << std::endl;
	return (*this);
}

std::string const & Ice::getType( void ) const
{
	return (this->type);
}

Ice *Ice::clone() const
{
	Ice	*ret = new Ice;
	return (ret);
}

void Ice::use(ICharacter& target)
{
	std::string targetname = target.getName();
	std::cout << "* shoots an ice bolt at " << targetname << " *" << std::endl;
}