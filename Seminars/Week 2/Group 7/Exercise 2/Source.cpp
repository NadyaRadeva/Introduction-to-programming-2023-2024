#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    if (!std::cin) {
        std::cout << "Error! You have entered wrong data!" << std::endl;
        return 1;
    }

    if (a > b) {
        std::cout << a << " is bigger than " << b << std::endl;
    }
    else {
        std::cout << b << " is bigger than " << a << std::endl;
    }

    return 1;
}
