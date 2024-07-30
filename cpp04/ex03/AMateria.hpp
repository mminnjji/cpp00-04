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
		virtual ~AMateria();
		AMateria(AMateria &other);
		AMateria &operator=(AMateria const &other);
		AMateria(std::string const& type);
		virtual const std::string& getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};


#endif
