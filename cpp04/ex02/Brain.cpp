#include "Brain.hpp"

Brain::Brain()
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Brain idea";
	std::cout << "A brain created with ideas\n";
}

Brain::~Brain()
{
	delete [] (this->ideas);
	std::cout << "A brain destroyed\n";
}

Brain::Brain(Brain & other)
{
	std::string *other_ideas = other.getIdeas();
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other_ideas[i] + " copied";
	std::cout << "A brain copid and constructed\n";
}

Brain & Brain::operator=(Brain const & other)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}

std::string *Brain::getIdeas()
{
	return (this->ideas);
}

void Brain::setIdeas(std::string &str)
{
	for (int i = 0; i < 100; i ++)
		this->ideas[i] = str;
}
