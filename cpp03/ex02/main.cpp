#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    // Create ClapTrap instances
    ClapTrap clap1("clappy");
    
    // Test ClapTrap methods
    clap1.attack("target1");
    clap1.takeDamage(5);
    clap1.beRepaired(10);

    // Create ScavTrap instance
    ScavTrap scav("scavvy");

    // Test ScavTrap methods
    scav.attack("target2");
    scav.takeDamage(10);
    scav.beRepaired(5);
    scav.guardGate();

    // Create FragTrap instance
    FragTrap frag("fraggy");

    // Test FragTrap methods
    frag.attack("target3");
    frag.takeDamage(25);
    frag.beRepaired(20);
    frag.highFivesGuys();

	// Edge case tests
    clap1.takeDamage(90); // Reduce HP to 0
    clap1.attack("target4"); // Should not attack
    clap1.beRepaired(20); // Should not repair

    // ScavTrap out of HP and EP
    scav.takeDamage(120); // Reduce HP to 0
    scav.attack("target5"); // Should not attack
    scav.beRepaired(20); // Should not repair

    // FragTrap out of HP and EP
    frag.takeDamage(120); // Reduce HP to 0
    frag.attack("target6"); // Should not attack
    frag.beRepaired(20); // Should not repair

    return 0;
}
