#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Materia source created\n";
	for(int i = 0; i < 4; i++)
	{
		this->inventory[i] = 0;
	}
}

MateriaSource::MateriaSource(MateriaSource const & other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i])
			this->inventory[i] = (other.inventory[i])->clone();
	}
	std::cout << "Materia source copied\n";
}

MateriaSource & MateriaSource::operator=(MateriaSource const & other)
{
	if (this != &other)
	{
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

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	std::cout << "Materia source destoryed\n";
}

void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;

	while ((this->inventory)[i] != 0 && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << "Can't learn more than 4 Materia";
		return ;
	}
	(this->inventory)[i] = m;
	std::cout << "Materia " << m->getType() << " learned\n";
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while ((this->inventory)[i] && ((this->inventory)[i])->getType() != type && i < 4)
		i++;
	if (i >= 4 || !(this->inventory)[i])
	{
		std::cout << type << " materia does not exit\n";
		return (NULL);
	}
	std::cout << "Materia " << type << " created\n";
	return (((this->inventory)[i])->clone());
}