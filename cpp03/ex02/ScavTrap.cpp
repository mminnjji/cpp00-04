#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){}

ScavTrap::ScavTrap(std::string str) : ClapTrap(str) {
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << str << " created with hitPoints:100 energyPoints:50 attackDamage:20" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << name << " destroyed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << "Copied ScavTrap " << name << " created" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
	std::cout << "Copied-assigned ScavTrap " << name << " created" << std::endl;
    return *this;
}

void ScavTrap::attack(const std::string& target) {
    if (energyPoints == 0 || hitPoints == 0) {
        std::cout << "ScavTrap " << name << " has no EP/HP to attack" << std::endl;
        return;
    }
    this->energyPoints--;
    std::cout << "ScavTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}
