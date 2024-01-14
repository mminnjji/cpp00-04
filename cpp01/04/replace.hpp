#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

class FileManipulator {
	public:
		FileManipulator(const std::string& filename, const std::string& s1, const std::string& s2);
		~FileManipulator();
		void replaceAndCopy();

	private:
		std::string filename;
		std::string s1;
		std::string s2;

		void replaceAll(std::string& str, const std::string& from, const std::string& to);
};

#endif