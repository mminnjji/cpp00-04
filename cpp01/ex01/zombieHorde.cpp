#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int i = 0;

	Zombie *many_zombie = new Zombie[N];
	while (i < N)
	{
		many_zombie[i].zombie_name(name);
		i++;
	}
	return (many_zombie);
}