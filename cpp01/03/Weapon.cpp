#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

Weapon::Weapon(std::string weapon_type)
{
	std::cout << weapon_type << " spawned\n";
	this->type = weapon_type;
}

Weapon::~Weapon(void)
{
}

const std::string &Weapon::getType()
{
	return (this->type);
}

void Weapon::setType(std::string new_type)
{
	std::cout << "new weapon -> " << new_type << " spawned!\n";
	this->type = new_type;
}