#include "Zombie.hpp"

int main()
{
	Zombie zombie_stack = Zombie("stack");
	zombie_stack.announce();

	Zombie *zombie_heap = newZombie("heap");
	zombie_heap->announce();
	delete zombie_heap;

	randomChump("random");

	return (0);
}