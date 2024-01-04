#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
	std::cout << this->name << " spawned" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->name << " is dead" << std::endl;
}

void HumanB::attack(void)
{
	std::cout << this->name << " is attacking with " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &new_weapon)
{
	this->weapon = &new_weapon;
	std::cout << this->name << " takes " << this->weapon->getType() << std::endl;
}