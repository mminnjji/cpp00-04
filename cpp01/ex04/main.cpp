#include "FileManipulator.hpp"

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "format: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename(argv[1]);
    std::string s1(argv[2]);
    std::string s2(argv[3]);

    FileManipulator fileManipulator(filename, s1, s2);
    fileManipulator.replaceAndCopy();

    return 0;
}
