#include <iostream>
#include "math_operations.h"

int main() {
    float num1 {};
    float num2 {};
    char symbol {};
    std::cout << "Enter a calculation: ";
    std::cin >> num1 >> symbol >> num2;
    
    switch (symbol) {
        case '+': {
            std::cout << "Result: " << MathOps::addition(num1, num2) << std::endl;
            break;
        }
        case '-': {
            std::cout << "Result: " << MathOps::subtraction(num1, num2) << std::endl;
            break;
        }
        case '*': {
            std::cout << "Result: " << MathOps::multiplication(num1, num2) << std::endl; 
            break;
        }
        case '/': {
            std::cout << "Result: " << MathOps::division(num1, num2) << std::endl;
            break;
        }
        default: {
            std::cout << "Input value cannot be recognized. " << std::endl;
            break;
        }
    }

    return 0;
}