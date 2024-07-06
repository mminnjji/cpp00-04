#include "Zombie.hpp"

Zombie::Zombie(void)
{

}

Zombie::~Zombie(void)
{
	std::cout << name << " is dead \n";
}

void Zombie::zombie_name(std::string name)
{
	this->name = name;
}

void Zombie::announce()
{
    std::cout << name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}