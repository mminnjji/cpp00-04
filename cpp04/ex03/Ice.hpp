#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(Ice const & other);
		Ice & operator=(Ice const & other);
		std::string const & getType() const;
		Ice *clone() const;
		void use(ICharacter& target);
	private:
		std::string _type;
};

#endif