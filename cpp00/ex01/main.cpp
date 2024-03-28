#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int main()
{
	std::string cmd;
	PhoneBook book;

	std::cout << "\n========  crappy awesome phonebook =======\n";
	std::cout << "=== ADD SEARCH EXIT command executable ===\n";

	while (1)
	{
		std::cout << "\n=> put your command : ";
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			book.add();
		}
		else if (cmd == "SEARCH")
		{
			book.search();
		}
		else if (cmd == "EXIT")
			return (0);
		else
			std::cout << "=> Wrong command! please try again\n";
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		if (std::cin.eof())
			return (0);
	}
}