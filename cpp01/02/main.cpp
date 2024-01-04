#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str; // 객체를 가리키는 포인터
	std::string &stringREF = str; // 객체에 대한 참조

	std::cout << "VALUES" << std::endl;
	std::cout << "value of str: " <<  str << std::endl;
	std::cout << "value pointed to by stringPTR: " <<  *stringPTR << std::endl;
	std::cout << "value stored in stringREF: " <<  stringREF << std::endl;
	std::cout << "\n";
	std::cout << "STORED ADDRESSES" << std::endl;
	std::cout << "\n";
	std::cout << "memory address of str: " <<  &str << std::endl;
	std::cout << "address stored in stringPTR: " <<  stringPTR << std::endl;
	std::cout << "address stored in stringREF: " <<  &stringREF << std::endl;
	std::cout << "\n";
	std::cout << " OWN ADDRESSES" << std::endl;
	std::cout << "address of stringPTR: " <<  &(stringPTR) << std::endl;
	std::cout << "address of stringREF: " <<  "references dont have an adress" << std::endl;

	return (0);	
}