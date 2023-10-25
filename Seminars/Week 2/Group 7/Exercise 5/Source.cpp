#include <iostream>

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    if (!std::cin) {
        std::cout << "Error! You have entered wrong data!" << std::endl;
        return 1;
    }

    unsigned multiple = n * (1 + n % 2);
    std::cout << "The smallest number divisible by both " << n << " and 2 is: " << multiple << std::endl;

    return 1;
}
