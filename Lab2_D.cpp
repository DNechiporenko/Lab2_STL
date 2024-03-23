#include <iostream>
#include <stack>
#include <string>

bool isBalanced(const std::string& str) {
    std::stack<char> brackets;

    for (char c : str) {
        if (c == '(' || c == '[' || c == '{') {
            brackets.push(c);
        }
        else if (c == ')' || c == ']' || c == '}') {
            if (brackets.empty()) {
                return false; // Нет открывающей скобки для закрывающей
            }
            char top = brackets.top();
            if ((c == ')' && top == '(') || (c == ']' && top == '[') || (c == '}' && top == '{')) {
                brackets.pop(); // Скобки совпали, удаляем пару
            }
            else {
                return false; // Скобки не совпали
            }
        }
    }

    return brackets.empty(); // Если стек пуст, значит, все скобки сбалансированы
}

int main() {
    std::string str;
    std::cin >> str;

    if (isBalanced(str)) {
        std::cout << "yes" << std::endl;
    }
    else {
        std::cout << "no" << std::endl;
    }

    return 0;
}