#include <iostream>

int main() {
    int number;

    std::cout << "Enter a four-digit number: ";
    std::cin >> number;

    if (!std::cin) {
        std::cout << "Error! You have entered wrong data!" << std::endl;
        return 1;
    }

    if (number < 1000 || number > 9999) {
        std::cerr << "Error: Please enter a valid four-digit number." << std::endl;
        return 1;
    }

    int digit1 = number / 1000;
    int digit2 = (number / 100) % 10;
    int digit3 = (number / 10) % 10;
    int digit4 = number % 10;

    int sum = digit1 + digit2 + digit3 + digit4;
    int product = digit1 * digit2 * digit3 * digit4;

    std::cout << "The sum of the digits is: " << sum << std::endl;
    std::cout << "The product of the digits is: " << product << std::endl;

    return 1;
}
