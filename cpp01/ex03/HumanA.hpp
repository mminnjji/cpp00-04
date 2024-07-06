#ifndef HUMANA_HPP
 #define HUMANA_HPP
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon &weapon;
	public:
		HumanA(std::string hum_name, Weapon &weapon_type);
		~HumanA();
		void attack(void);
		void setWeapon(Weapon &newweapon);
};

#endif