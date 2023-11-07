#include <iostream>

int findMaxDigit(int number) {
    int maxDigit = -1;

    while (number > 0) {
        int digit = number % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        number /= 10;
    }

    return maxDigit;
}

int replaceDigits(int number, int targetDigit, int replacementDigit) {
    int result = 0;
    int position = 1;

    while (number > 0) {
        int digit = number % 10;
        if (digit != targetDigit) {
            result += digit * position;
        }
        else {
            result += replacementDigit * position;
        }
        position *= 10;
        number /= 10;
    }

    return result;
}

int main() {
    int number;
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (number <= 0) {
        std::cout << "Invalid input. Please enter a positive integer." << std::endl;
        return 1;
    }

    int maxDigit = findMaxDigit(number);
    int newNumber = replaceDigits(number, maxDigit, 9);

    std::cout << "The largest possible number after replacement: " << newNumber << std::endl;

    return 1;
}
