#ifndef FILEMANIPULATOR_HPP
# define FILEMANIPULATOR_HPP

#include <iostream>
#include <fstream>
#include <string>

class FileManipulator {
	private:
		std::string filename;
		std::string s1;
		std::string s2;

		void replaceAll(std::string& str, const std::string& from, const std::string& to);
	public:
		FileManipulator(const std::string& filename, const std::string& s1, const std::string& s2);
		~FileManipulator();
		void replaceAndCopy();
};

#endif