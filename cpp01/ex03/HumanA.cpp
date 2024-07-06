#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanA::HumanA(std::string name, Weapon &weapon_type) : name(name), weapon(weapon_type)
{
	std::cout << this->name << " spawned with a " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << this->name << " is dead" << std::endl;
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &newweapon)
{
	this->weapon = newweapon;
}
