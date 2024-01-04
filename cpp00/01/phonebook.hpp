#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>

class contact
{	
	public:
		std::string first_name;
		std::string last_name;
		std::string phone_number;
		std::string nickname;
		std::string secret;
		contact(){};
		~contact(){};
};

class phonebook
{
	private:
		int idx;
		int max;
		contact infos[8];
		void add_list(int index);
		void list_show(int index);
		void search_list(int index);
	public:
		phonebook();
		~phonebook();

		void add();
		void search();	
};

#endif