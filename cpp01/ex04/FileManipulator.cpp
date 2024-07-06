#include "FileManipulator.hpp"

void FileManipulator::replaceAll(std::string& str, const std::string& from, const std::string& to) {
    if (from.empty()) {
        return;
    }
    std::string result = "";
    size_t pos = 0;
    size_t prev_pos = 0;
    while ((pos = str.find(from, prev_pos)) != std::string::npos) {
        result += str.substr(prev_pos, pos - prev_pos);
        result +=  to;
        prev_pos = pos + from.length();
    }
    result += str.substr(prev_pos);
    str = result;
}

void FileManipulator::replaceAndCopy()
{
    std::ifstream input_file(filename);
	if (!input_file.is_open()) {
        std::cerr << "error: inputfile " << filename << " is not openable" << std::endl;
        return;
    }

    std::ofstream output_file(filename + ".replace");
    if (!output_file.is_open()) {
        std::cerr << "error: outputfile " << filename + ".replace is not openable" << std::endl;
        return;
    }

    std::string line;
    while (std::getline(input_file, line)) {
	     replaceAll(line, s1, s2);
         output_file << line << '\n';
    }

    std::cout << "Replace success. The result is stored in " << filename + ".replace" << std::endl;
}

FileManipulator::FileManipulator(const std::string& filename, const std::string& s1, const std::string& s2) : filename(filename), s1(s1), s2(s2)
{
}

FileManipulator::~FileManipulator(void)
{
}