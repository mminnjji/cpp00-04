#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		const std::string type;
	public:
		AMateria();
		~AMateria();
		AMateria(AMateria &other);
		AMateria &operator=(AMateria &other);
		AMateria(std::string const & type);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};


#endif
