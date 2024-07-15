#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){
    ScavTrap scav("scappy");

    scav.attack("target");
    scav.takeDamage(15);
    scav.beRepaired(5);
    scav.guardGate();

    scav.takeDamage(90); 
    scav.attack("target"); 
    scav.beRepaired(20); 

    return 0;
}