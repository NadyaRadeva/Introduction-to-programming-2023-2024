#include <iostream>

int main() {
    double result = 0;
    char operation;
    double number;

    std::cout << "Calculator";
    std::cout << "Current result: " << result << std::endl;

    while (true) {
        std::cout << "Enter operation (+, -, *, /) and a number: ";
        std::cin >> operation;

        if (operation == 'q') {
            std::cout << "The end result is: " << result << std::endl;
            break;
        }

        if (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
            std::cerr << "Error! Invalid operation." << std::endl;
            continue;
        }

        std::cin >> number;

        switch (operation) {
            case '+':
                result += number;
                break;
            case '-':
                result -= number;
                break;
            case '*':
                result *= number;
                break;
            case '/':
                if (number == 0) {
                    std::cerr << "Error! You can not devide by 0." << std::endl;
                } else {
                    result /= number;
                }
                break;
            default:
                break;
        }

        std::cout << "Current result: " << result << std::endl;
    }

    return 1;
}
