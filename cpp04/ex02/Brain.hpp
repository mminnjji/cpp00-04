#ifndef BRAIN_CPP
# define BRAIN_CPP

#include <iostream>

class Brain
{
	public:
		Brain();
		~Brain();
		Brain(Brain& other);
		Brain& operator=(Brain const &other);
		std::string *getIdeas();
		void setIdeas(std::string &str);
	private:
		std::string *ideas;
};


#endif
