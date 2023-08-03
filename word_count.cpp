#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int countWordsInFile(const std::string& file_name) {
    std::ifstream file(file_name);
    if (!file.is_open()) {
        std::cout << "Error: File not found." << std::endl;
        return -1;
    }

    std::string line;
    int word_count = 0;
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string word;
        while (ss >> word) {
            word_count++;
        }
    }

    file.close();
    return word_count;
}

int main() {
    std::string file_name;
    std::cout << "Enter the name of the text file: ";
    std::cin >> file_name;

    int word_count = countWordsInFile(file_name);

    if (word_count != -1) {
        std::cout << "Total number of words in the file: " << word_count << std::endl;
    }

    return 0;
}
