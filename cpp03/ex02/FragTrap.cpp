#include "FragTrap.hpp"

FragTrap::FragTrap(std::string str) : ClapTrap(str) {
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << str << " created with hitPoints:100 energyPoints:100 attackDamage:30" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " destroyed" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    *this = other;
    std::cout << "Copied FragTrap " << name << " created" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

 void FragTrap::highFivesGuys(void) {
    std::cout << "Let's give a high five!" << std::endl;
}
