#include "ClapTrap.hpp"

int main(){
    ClapTrap clappy("clappy");
    clappy.attack("Trappy");
    clappy.takeDamage(3);
    clappy.beRepaired(3);
	clappy.takeDamage(10);
	clappy.beRepaired(10);
}