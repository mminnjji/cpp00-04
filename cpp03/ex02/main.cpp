#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    FragTrap frag("fraggy");

    frag.attack("target");
    frag.takeDamage(25);
    frag.beRepaired(20);
    frag.highFivesGuys();

    frag.takeDamage(120); 
    frag.attack("target"); 
    frag.beRepaired(20); 

    return 0;
}
