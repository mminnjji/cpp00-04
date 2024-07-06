#include "Zombie.hpp"

int main(void)
{
	int n = 3;
	int i = 0;
	
	std::string name = "zzommbbie";
	
	Zombie *zombie_horde = zombieHorde(n, name);

	while (i < n)
	{
		zombie_horde[i].announce();
		i++;
	}
	delete[] zombie_horde;
	return (0);
}