#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    if (!std::cin) {
        std::cout << "Error! You have entered wrong data!" << std::endl;
        return 1;
    }

    double average = (a + (double) b) / 2;

    std::cout << "The average of " << a << " and " << b << " is " << average << "." << std::endl;

    return 1;
}
