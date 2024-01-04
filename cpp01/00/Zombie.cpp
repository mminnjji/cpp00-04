#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << name << " 이름의 좀비를 생성합니다. \n";
}

Zombie::~Zombie(void)
{
	std::cout << name << "가 죽었습니다! ^^ \n";
}

void Zombie::announce()
{
    std::cout << name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}