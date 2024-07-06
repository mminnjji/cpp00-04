#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN"; // 문자열 객체 생성
	std::string *stringPTR = &str; // 객체를 가리키는 포인터
	std::string &stringREF = str; // 객체에 대한 참조

	// 저장된 주소 출력
	std::cout << "STORED ADDRESSES" << std::endl;
	std::cout << "memory address of str: " <<  &str << std::endl; 
	std::cout << "address stored in stringPTR: " <<  stringPTR << std::endl;
	std::cout << "address stored in stringREF: " <<  &stringREF << std::endl;
	std::cout << "\n";

	// 객체 값 출력
	std::cout << "VALUES" << std::endl;
	std::cout << "value of str: " <<  str << std::endl;
	std::cout << "value pointed to by stringPTR: " <<  *stringPTR << std::endl;
	std::cout << "value stored in stringREF: " <<  stringREF << std::endl;
	std::cout << "\n";

	return (0);	
}