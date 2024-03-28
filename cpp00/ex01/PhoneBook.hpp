#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
	private:
		int idx;
		int max;
		Contact infos[8];
		void addList(int index);
		void listShow(int index);
		void searchList(int index);
	public:
		PhoneBook();
		~PhoneBook();

		void add();
		void search();	
};

#endif