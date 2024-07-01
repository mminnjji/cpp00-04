#include <iostream>
#include <string>
#include <cstdlib>
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
    Contact &info = infos[index];

    std::string tmp;

    std::cout << "\n=> Put address info\n";
    std::cout << "=> first name: ";
    std::getline(std::cin, tmp);
    while (tmp.empty() || tmp.find_first_not_of(' ') == std::string::npos)
    {
		if (std::cin.eof())
			break;
		std::cin.clear();
        std::cout << "=> Empty input or only spaces! please try again\n";
        std::cout << "=> first name: ";
        std::getline(std::cin, tmp);
    }
    info.setAttribute(1, tmp);
    
    std::cout << "=> last name: ";
    std::getline(std::cin, tmp);
    while (tmp.empty() || tmp.find_first_not_of(' ') == std::string::npos)
    {
		if (std::cin.eof())
			break;
		std::cin.clear();
        std::cout << "=> Empty input or only spaces! please try again\n";
        std::cout << "=> last name: ";
        std::getline(std::cin, tmp);
    }
    info.setAttribute(2, tmp);

    std::cout << "=> nick name: ";
    std::getline(std::cin, tmp);
    while (tmp.empty() || tmp.find_first_not_of(' ') == std::string::npos)
    {
		if (std::cin.eof())
			break;
		std::cin.clear();
        std::cout << "=> Empty input or only spaces! please try again\n";
        std::cout << "=> nick name: ";
        std::getline(std::cin, tmp);
    }
    info.setAttribute(3, tmp);

    std::cout << "=> phone number: ";
    std::getline(std::cin, tmp);
    while (tmp.empty() || tmp.find_first_not_of(' ') == std::string::npos)
    {
		if (std::cin.eof())
			break;
		std::cin.clear();
        std::cout << "=> Empty input or only spaces! please try again\n";
        std::cout << "=> phone number: ";
        std::getline(std::cin, tmp);
    }
    info.setAttribute(4, tmp);

    std::cout << "=> secret: ";
    std::getline(std::cin, tmp);
    while (tmp.empty() || tmp.find_first_not_of(' ') == std::string::npos)
    {
		if (std::cin.eof())
			break;
		std::cin.clear();
        std::cout << "=> Empty input or only spaces! please try again\n";
        std::cout << "=> secret: ";
        std::getline(std::cin, tmp);
    }
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
    std::string input;
    int idx_search;
    int i;

    i = 0;
    std::cout << "|";
    std::cout << std::setw(10) << "index" << '|';
    std::cout << std::setw(10) << "first name" << '|';
    std::cout << std::setw(10) << "last name" << '|';
    std::cout << std::setw(10) << "nickname" << '|' << std::endl;
    std::cout << "-------------------------------------------\n";

    while (i < max)
    {
        listShow(i);
        i++;
    }

    while (1) {
        std::cout << "\n=> put number to find: ";
        std::getline(std::cin, input);
		if (std::cin.eof())
			break;
        if (input.empty() || input.find_first_not_of(' ') == std::string::npos)
        {
            std::cout << "=> Empty input or only spaces! please try again\n";
            continue;
        }
        idx_search = atoi(input.c_str()) - 1;
        if (idx_search < 0 || idx_search > 7 || idx_search >= max)
        {
            std::cout << "=> not invalid index from list -> put number in list\n";
            continue;
        }
        if (idx == 0)
            std::cout << "=> empty phonebook\n";
        else if (idx_search < max && idx_search >= 0)
            searchList(idx_search);
		std::cin.clear();
		break;
    }
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
