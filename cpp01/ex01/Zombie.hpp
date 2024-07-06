#ifndef Zombie_HPP
# define Zombie_HPP

#include <iostream>
#include <string>

class Zombie
{	
	private:
		std::string name;
	public:
		Zombie(void);
		~Zombie(void);
		void announce(void);
		void zombie_name(std::string name);

};

Zombie*	zombieHorde(int N, std::string name);
#endif