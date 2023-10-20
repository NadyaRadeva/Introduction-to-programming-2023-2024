#include <iostream>
#include <cmath>

int main() {
    long long int number;
    long long int rotatedNumber = 0;
    int numDigits = 0;

    std::cout << "Enter a number to be rotated: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "You should enter a positive number!" << std::endl;
        return 1;
    }

    long long int temp = number;
    while (temp > 0) {
        temp /= 10;
        numDigits++;
    }

    temp = number;
    long long int firstDigit = temp / pow(10, numDigits - 1);
    temp = (temp - firstDigit * pow(10, numDigits - 1)) * 10 + firstDigit;
    rotatedNumber = temp;

    std::cout << "Rotated number: " << rotatedNumber << std::endl;

    return 0;
}
