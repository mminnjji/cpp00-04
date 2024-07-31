#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* gugu = new Character("GuGu");
	AMateria* tmp[5];

	//equip
	//1
	tmp[0] = src->createMateria("ice");
	gugu->equip(tmp[0]);

	//2
	tmp[1] = src->createMateria("cure");
	gugu->equip(tmp[1]);

	//3
	tmp[2] = src->createMateria("cure");
	gugu->equip(tmp[2]);

	//4
	tmp[3] = src->createMateria("ice");
	gugu->equip(tmp[3]);

	//5
	tmp[4] = src->createMateria("cure");
	gugu->equip(tmp[4]);

	//target
	ICharacter* bob = new Character("bob");
	gugu->use(0, *bob);
	gugu->use(1, *bob);
	gugu->use(2, *bob);
	gugu->use(3, *bob);
	gugu->use(4, *bob);

	//unequip
	gugu->unequip(0);
	delete tmp[0];
	gugu->unequip(1);
	delete tmp[1];
	gugu->unequip(2);
	delete tmp[2];
	gugu->unequip(3);
	delete tmp[3];

	delete tmp[4];

	delete bob;
	delete gugu;
	delete src;
	//system("leaks ex03");
	return 0;
}