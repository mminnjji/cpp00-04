#include "phonebook.hpp"
#include <iostream>

int main()
{
	std::string cmd;
	phonebook book;

	std::cout << "\n====== 형편없이 멋진 전화번호부 ======\n";
	std::cout << "=== ADD SEARCH EXIT 명령 실행 가능 ===\n";

		while (1)
		{
			std::cout << "\n=> 명령을 입력하세요 : ";
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
			std::cout << "=> 없는 명령어 입니다. 다시 입력해주세요!\n";
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		if (std::cin.eof())
			return (0);
	}
}