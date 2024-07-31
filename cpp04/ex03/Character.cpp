#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string name) : name(name)
{
	std::cout << "Character " << name << " created\n";
	for(int i = 0; i < 4; i++)
	{
		this->inventory[i] = 0;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	std::cout << "Character " << this->name << " destroyed\n";
}

std::string const & Character::getName() const
{
	return (this->name);
}

Character::Character(Character &other) : name(other.getName() + "copy")
{
	for(int i = 0; i < 4; i++)
	{
		if ((other.inventory)[i])
			(this->inventory)[i] = (other.inventory[i])->clone();
	}
	std::cout << "Character " << name << " created copied " << other.name << "\n";
}

Character & Character::operator=(Character const & other)
{
	if (this != &other)
	{
		this->name = other.getName();
		for(int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
				delete this->inventory[i];
			if (other.inventory[i])
				this->inventory[i] = (other.inventory[i])->clone();
		}
	}
	return (*this);
}

void Character::equip(AMateria* m)
{
	int i = 0;

	if (!m)
	{
		std::cout << this->name << "has no Materia to equip\n";
		return ;
	}
	while ((this->inventory)[i] != 0 && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << this->name << " can't equip more than 4 Materia\n";
		return ;
	}
	(this->inventory)[i] = m;
	std::cout << this->name << " equipped materia " << m->getType() << " in slot " << i << "\n";
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		std::cout << this->name << " can't unequip : idx out of range (0 ~ 3)\n";
	else if (!(this->inventory)[idx])
		std::cout << this->name << " can't unequip : no Materia in slot\n";
	else
	{
		AMateria *ptr = (this->inventory)[idx];
		std::cout << this->name << " unequipped " << ptr->getType() << " at slot "<< idx << "\n";
		(this->inventory)[idx] = 0;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << this->name << " can't use : idx out of range (0 ~ 3)\n";
		return ;
	}
	else if (!(this->inventory)[idx])
	{
		std::cout << this->name << " can't use : no Materia in slot\n";
		return ;
	}
	std::cout << this->getName() << " ";
	((this->inventory)[idx])->use(target);
}

AMateria	*Character::getMateriaFromInventory(int idx)
{
	return (this->inventory)[idx];
}