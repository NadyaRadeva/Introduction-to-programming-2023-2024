#include <iostream>

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    if (!std::cin) {
        std::cout << "Error! You have entered wrong data!" << std::endl;
        return 1;
    }

    double sum = ((n + 1) * n) / 2;

    std::cout << "The sum of the numbers is: " << sum << std::endl;

    return 1;
}
