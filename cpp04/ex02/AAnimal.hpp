#ifndef AAnimal_HPP
# define AAnimal_HPP

#include <iostream>

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(const AAnimal& other);
		AAnimal& operator=(const AAnimal& other);
		virtual void makeSound() const = 0;
		virtual std::string getBrainIdeas() const = 0;
		std::string getType() const;
		void setType(std::string name);
};

#endif