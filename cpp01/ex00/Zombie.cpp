#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << name << " zombie created \n";
}

Zombie::~Zombie(void)
{
	std::cout << name << " is dead \n";
}

void Zombie::announce()
{
    std::cout << name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}