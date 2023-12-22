#include <iostream>

double add(double num1, double num2) {
    return num1 + num2;
};

double subtract(double num1, double num2) {
    return num1 - num2;
};

double multiply(double num1, double num2) {
    return num1 * num2;
};

double divide(double num1, double num2) {
    return num1 / num2;
};

int main() {
    double x;
    double y;
    char operation;

    std::cout << "**************** CALCULATOR **************** \n";

    std::cout << "Operation (+ - * /): ";
    std::cin >> operation;

    std::cout << "#1: ";
    std::cin >> x;

    std::cout << "#2: ";
    std::cin >> y;

    switch(operation) {
        case '+':
            std::cout << add(x, y) << "\n";
            break;
        case '-':
            std::cout << subtract(x, y) << "\n";
            break;
        case '*':
            std::cout << multiply(x, y) << "\n";
            break;
        case '/':
            std::cout << divide(x, y) << "\n";
            break;
        default:
            std::cout << "Invalid Operation " << "'" << operation << "' \n";
            break;
    }

    std::cout << "********************************************";

    return 0;
}