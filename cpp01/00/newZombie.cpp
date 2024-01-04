#include "Zombie.hpp"

Zombie* newZombie (std::string name)
{
	Zombie *newzom;
	
	newzom = new Zombie(name);
	return (newzom);
}