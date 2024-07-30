#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		virtual void makeSound() const;
		virtual std::string getBrainIdeas() const;
		Brain *getBrain( void ) const;
};

#endif