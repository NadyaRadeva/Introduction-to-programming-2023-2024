#include <iostream>
#include <cmath>

int main() {
    std::cout << "Enter a number: ";
    int n, newNum;
    std::cin >> n;
    if (!std::cin) {
        std::cout << "Error! You have entered a wrong number!" << std::endl;
        return 1;
    }

    newNum = n;

    int count = 0;

    while (n != 0) {
        n /= 10;
        count++;
    }

    n = newNum;

    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, count);
        n /= 10;
    }

    if (newNum == sum) {  // Compare newNum with sum
        std::cout << "This is an Armstrong number." << std::endl;
    }
    else {
        std::cout << "This is not an Armstrong number." << std::endl;
    }

    return 0;
}
