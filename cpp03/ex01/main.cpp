#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){
    ClapTrap clappy("clappy");
    clappy.attack("Trappy");
    clappy.takeDamage(3);
    clappy.beRepaired(3);
	clappy.takeDamage(10);
	clappy.beRepaired(10);

	ScavTrap scav("Scavvy");

    scav.attack("target1");
    scav.takeDamage(50);
    scav.beRepaired(30);
    scav.guardGate();

    return 0;
}