#include <iostream>
#include <string>
#include <iomanip>
#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string make_ten(std::string str)
{
	std::string tmp;

	if (str.length() > 10)
	{
		tmp = str.substr(0, 9);
		tmp += ".";
	}
	else
		tmp = str;
	return (tmp);
}

void PhoneBook::addList(int index)
{
	if (max <= idx)
		max = idx;
	Contact info = infos[index];
	std::string tmp;

	std::cout << "\n=> Put address info\n";
	std::cout << "=> first name: ";
	std::cin >> tmp;
	info.setAttribute(1, tmp);
	
	std::cout << "=> last name: ";
	std::cin >> tmp;
	info.setAttribute(2, tmp);

	std::cout << "=> nick name: ";
	std::cin >> tmp;
	info.setAttribute(3, tmp);

	std::cout << "=> phone number: ";
	std::cin >> tmp;
	info.setAttribute(4, tmp);

	std::cout << "=> secret: ";
	std::cin >> tmp;
	info.setAttribute(5, tmp);
}

void PhoneBook::add(void)
{
	if (idx == 8)
		idx = 0;
	addList(idx++);
}

void PhoneBook::listShow(int index)
{
	Contact &info = infos[index];

	std::cout << "|";
	std::cout << std::setw(10) << index + 1 << "|";
	std::cout << std::setw(10) << make_ten(info.getAttribute(1)) << "|";
	std::cout << std::setw(10) << make_ten(info.getAttribute(2)) << "|";
	std::cout << std::setw(10) << make_ten(info.getAttribute(3)) << "|" << std::endl;
}

void PhoneBook::searchList(int index)
{
	Contact &info = infos[index];

	std::cout << "=> first name: " << info.getAttribute(1) << std::endl;
	std::cout << "=> last name: " << info.getAttribute(2) << std::endl;
	std::cout << "=> nickname: " << info.getAttribute(3) << std::endl;
	std::cout << "=> number: " << info.getAttribute(4) << std::endl;
	std::cout << "=> secret: " << info.getAttribute(5) << std::endl;
}

void PhoneBook::search(void)
{
	int idx_search;
	int i;

	i = 0;
	std::cout << "|";
	std::cout << std::setw(10) << "index" << '|';
	std::cout << std::setw(10) << "first name" << '|';
	std::cout << std::setw(10) << "last name" << '|';
	std::cout << std::setw(10) << "nickname" << "|\n";
	std::cout << "|-------------------------------------------|\n";

	while (i < max)
	{
		listShow(i);
		i++;
	}
	std::cout << "\n=> put number to find: ";
	std::cin >> idx_search;
	if (!(idx_search < 9 && idx_search > 0))
	{
		std::cout << "=> out of range!! (1 ~ 8)\n";
		return;
	}
	idx_search--;
	if (idx == 0)
		std::cout << "=> empty phonebook\n";
	else if (idx_search < max && idx_search >= 0)
		searchList(idx_search);
	else
		std::cout << "=> index search fail\n";
}

PhoneBook::PhoneBook()
{
	idx = 0;
	max = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "\n~~~~~~~~EXIT PHONEBOOK~~~~~~~\n";
}