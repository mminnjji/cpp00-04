#ifndef BRAIN_CPP
# define BRAIN_CPP

#include <iostream>

class Brain
{
	public:
		Brain();
		~Brain();
		Brain(Brain& other);
		Brain& operator=(Brain&other);
	private:
		std::string ideas[100];
}


#endif
