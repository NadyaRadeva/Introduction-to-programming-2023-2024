#include <iostream>

int mult(int n, int k) {
    if (n < k) {
        return 1;
    }
    if (n % k == 0) {
        return n * mult(n - k, k);
    }
    return mult(n - 1, k);
}

int main() {
    int n, k;
    std::cout << "Enter the end of your sequence: ";
    std::cin >> n;
    if (!std::cin || n <= 0) {
        throw std::runtime_error("Error! Invalid input for sequence end.");
        return 1;
    }

    std::cout << "Enter your step: ";
    std::cin >> k;
    if (!std::cin || k <= 0) {
        throw std::runtime_error("Error! Invalid input for step.");
        return 1;
    }

    std::cout << "Your result is: " << mult(n, k) << std::endl;

    return 0;
}
