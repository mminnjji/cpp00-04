#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <limits>

int main()
{
    std::string cmd;
    PhoneBook book;

    std::cout << "\n========  crappy awesome phonebook =======\n";
    std::cout << "=== ADD SEARCH EXIT command executable ===\n";

    while (1)
    {
        std::cout << "\n=> put your command : ";
        std::getline(std::cin, cmd);
		if (std::cin.eof())
			return 0;
        if (cmd.empty() || cmd.find_first_not_of(' ') == std::string::npos)
        {
            std::cout << "=> Empty input or only spaces! please try again";
            continue;
        }
        if (cmd == "ADD")
            book.add();
        else if (cmd == "SEARCH")
            book.search();
        else if (cmd == "EXIT")
            return 0;
        else
            std::cout << "=> Wrong command! please try again";
        std::cin.clear();
    }
}
