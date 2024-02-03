#include <iostream>
#include <cmath>

bool isEven(int digit);
bool doesNumContainEvenDigits(int number, int k);
bool isNumPerfectSquare(int number);

bool isEven(int digit) {
    return digit % 2 == 0;
}

bool doesNumContainEvenDigits(int number, int k) {
    int* values = new int[k];

    int counter = 0;

    while (number != 0) {
        if (isEven(number % 10)) {
            values[counter] = 1;
        } else {
            values[counter] = 0;
        }
        ++counter;
        number /= 10;
    }

    int sum = 0;

    for (size_t i = 0; i < k; ++i) {
        sum += values[i];
    }

    delete[] values;

    return sum == k;
}

bool isNumPerfectSquare(int number) {
    if (number < 0) {
        return false;
    }

    int helper = sqrt(number);

    return pow(helper, 2) == number;
}

int main() {
    int k;
    std::cout << "Enter the number of your digits: ";
    std::cin >> k;
    if (!std::cin || k < 1) {
        throw std::runtime_error("Error! You have entered invalid input!");
        return 1;
    }

    int begInterval = pow(10, k - 1);
    int endInterval = pow(10, k) - 1;

    for (size_t i = begInterval; i <= endInterval; ++i) {
        if (doesNumContainEvenDigits(i, k) && isNumPerfectSquare(i)) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}

