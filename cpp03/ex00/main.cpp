#include "ClapTrap.hpp"

int main(){
    ClapTrap clap1("clappy");

    clap1.attack("target");
    clap1.takeDamage(5);
    clap1.beRepaired(10);

    clap1.takeDamage(90);
    clap1.attack("target");
    clap1.beRepaired(20);
}