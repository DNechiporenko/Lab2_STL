﻿#include <iostream>
#include <stack>
#include <string>
#include <sstream>

int evaluatePostfix(const std::string& expression) {
    std::stack<int> operands;
    std::istringstream iss(expression);

    std::string token;
    while (iss >> token) {
        if (token == "+" || token == "-" || token == "*") {
            int operand2 = operands.top(); operands.pop();
            int operand1 = operands.top(); operands.pop();
            if (token == "+") {
                operands.push(operand1 + operand2);
            }
            else if (token == "-") {
                operands.push(operand1 - operand2);
            }
            else if (token == "*") {
                operands.push(operand1 * operand2);
            }
        }
        else {
            operands.push(std::stoi(token));
        }
    }

    return operands.top();
}

int main() {
    std::string expression;
    std::getline(std::cin, expression);

    std::cout << evaluatePostfix(expression) << std::endl;

    return 0;
}
