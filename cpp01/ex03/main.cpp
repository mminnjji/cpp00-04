#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
  {
    Weapon club = Weapon("Hammer");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("RocketPuncher");
    bob.attack();
  }
  {
    Weapon club = Weapon("Sword");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("Gun");
    jim.attack();
  }
}
