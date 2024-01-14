#include "replace.hpp"

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "사용법: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename(argv[1]);
    std::string s1(argv[2]);
    std::string s2(argv[3]);

    FileManipulator fileManipulator(filename, s1, s2);
    fileManipulator.replaceAndCopy();

    return 0;
}

void FileManipulator::replaceAndCopy()
{
    std::ifstream input_file(filename);
	if (!input_file.is_open()) {
        std::cerr << "오류: 입력 파일 " << filename << "을 열 수 없습니다." << std::endl;
        return;
    }

    std::ofstream output_file(filename + ".replace");
    if (!output_file.is_open()) {
        std::cerr << "오류: 출력 파일 " << filename + ".replace" << "을 열 수 없습니다." << std::endl;
        return;
    }

    std::string line;
    while (std::getline(input_file, line)) {
	     replaceAll(line, s1, s2);
         output_file << line << '\n';
    }

    std::cout << "대체가 성공적으로 완료되었습니다. 결과는 " << filename + ".replace" << "에 저장되었습니다." << std::endl;
}

void FileManipulator::replaceAll(std::string& str, const std::string& from, const std::string& to) {
        size_t start_pos = 0;
        while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
            str.replace(start_pos, from.length(), to);
            start_pos += to.length();
        }
    }

FileManipulator::FileManipulator(const std::string& filename, const std::string& s1, const std::string& s2) : filename(filename), s1(s1), s2(s2)
{
}

FileManipulator::~FileManipulator(void)
{
}