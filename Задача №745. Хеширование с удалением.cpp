#include <iostream>
#include <unordered_set>
#include <string>

int main() {
    std::unordered_set<std::string> set;
    char operation;
    std::string word;

    while (true) {
        std::cin >> operation;
        if (operation == '#') {
            break;
        }
        std::cin >> word;

        switch (operation) {
        case '+':
            set.insert(word);
            break;
        case '-':
            set.erase(word);
            break;
        case '?':
            if (set.find(word) != set.end()) {
                std::cout << "YES" << std::endl;
            }
            else {
                std::cout << "NO" << std::endl;
            }
            break;
        }
    }

    return 0;
}
