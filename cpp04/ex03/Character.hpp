#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		AMateria *(inventory[4]);
		std::string	name;
	public:
		Character();
		virtual ~Character();
		Character(Character &other);
		Character& operator=(Character const &other);
		Character(std::string name);
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m); // 장착 ~
		virtual void unequip(int idx); // 노 장착
		virtual void use(int idx, ICharacter& target);
		AMateria	*getMateriaFromInventory(int idx);
};

#endif