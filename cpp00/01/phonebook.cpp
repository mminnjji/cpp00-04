#include <iostream>
#include <string>
#include <iomanip>
#include "phonebook.hpp"

std::string make_ten(std::string str)
{
	std::string tmp;

	if (str.length() >= 10)
	{
		tmp = str.substr(0, 9);
		tmp += ".";
	}
	else
		tmp = str;
	return (tmp);
}

void phonebook::add_list(int index)
{
	if (max <= idx)
		max = idx;
	contact &info = infos[index];

	std::cout << "\n=> 정보를 입력하세요!\n";
	std::cout << "=> first name: ";
	std::cin >> info.first_name;
	
	std::cout << "=> last name: ";
	std::cin >> info.last_name;

	std::cout << "=> nick name: ";
	std::cin >> info.nickname;

	std::cout << "=> phone number: ";
	std::cin >> info.phone_number;

	std::cout << "=> secret: ";
	std::cin >> info.secret;
}

void phonebook::add(void)
{
	if (idx == 8)
		idx = 0;
	add_list(idx++);
}

void phonebook::list_show(int index)
{
	contact &info = infos[index];

	std::cout << "|";
	std::cout << std::setw(10) << index + 1 << "|";
	std::cout << std::setw(10) << make_ten(info.first_name) << "|";
	std::cout << std::setw(10) << make_ten(info.last_name) << "|";
	std::cout << std::setw(10) << make_ten(info.nickname) << "|" << std::endl;
}

void phonebook::search_list(int index)
{
	contact &info = infos[index];

	std::cout << "=> first name: " << info.first_name << std::endl;
	std::cout << "=> last name: " << info.last_name << std::endl;
	std::cout << "=> nickname: " << info.nickname << std::endl;
	std::cout << "=> number: " << info.phone_number << std::endl;
	std::cout << "=> secret: " << info.secret << std::endl;
}

void phonebook::search(void)
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
		list_show(i);
		i++;
	}
	std::cout << "\n=> 찾으려는 번호를 입력하세요!: ";
	std::cin >> idx_search;
	if (idx_search > 8)
	{
		std::cout << "=> 범위를 벗어났습니다!! (범위 1 ~ 8)\n";
		return;
	}
	idx_search--;
	if (idx == 0)
		std::cout << "=> 전화번호부가 비었습니다! \n";
	else if (idx_search <= max && idx_search >= 0)
		search_list(idx_search);
}

phonebook::phonebook()
{
	idx = 0;
	max = 0;
}

phonebook::~phonebook()
{
	std::cout << "~~~~~~~~전화번호부를 종료합니다~~~~~~~\n";
}