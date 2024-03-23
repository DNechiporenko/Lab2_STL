#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>

int main() {
    std::ifstream inFile("input.txt");
    std::map<int, std::vector<std::string>> students;

    int classNum;
    std::string lastName;

    while (inFile >> classNum >> lastName) {
        students[classNum].push_back(lastName);
    }

    for (int classNum = 9; classNum <= 11; ++classNum) {
        for (const auto& lastName : students[classNum]) {
            std::cout << classNum << " " << lastName << std::endl;
        }
    }

    return 0;
}