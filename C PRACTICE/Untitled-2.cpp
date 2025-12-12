#include <iostream>

class Calculator {
private:
    double num1;
    double num2;

public:
    // Constructor to initialize numbers (optional, can be set via methods)
    Calculator() : num1(0.0), num2(0.0) {}

    // Method to set the numbers for calculation
    void setNumbers(double n1, double n2) {
        num1 = n1;
        num2 = n2;
    }

    // Methods for arithmetic operations
    double add() {
        return num1 + num2;
    }

    double subtract() {
        return num1 - num2;
    }

    double multiply() {
        return num1 * num2;
    }

    double divide() {
        if (num2 == 0) {
            std::cout << "Error: Division by zero is not allowed." << std::endl;
            return 0.0; // Or handle error in a more robust way
        }
        return num1 / num2;
    }
};

int main() {
    Calculator calc; // Create an object of the Calculator class
    double val1, val2;
    char operation;

    std::cout << "Enter first number: ";
    std::cin >> val1;
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> operation;
    std::cout << "Enter second number: ";
    std::cin >> val2;

    calc.setNumbers(val1, val2); // Set the numbers in the calculator object

    switch (operation) {
        case '+':
            std::cout << "Result: " << calc.add() << std::endl;
            break;
        case '-':
            std::cout << "Result: " << calc.subtract() << std::endl;
            break;
        case '*':
            std::cout << "Result: " << calc.multiply() << std::endl;
            break;
        case '/':
            std::cout << "Result: " << calc.divide() << std::endl;
            break;
        default:
            std::cout << "Invalid operator." << std::endl;
            break;
    }

    return 0;
}