#include <iostream>

int mult(int n) {
    if (n < k) {
        return 1;
    }
    if (n % 3 == 0) {
        return n * mult(n - 3);
    }
    return mult(n - 1);
}

int main() {
    int n;
    std::cout << "Enter the end of your sequence: ";
    std::cin >> n;
    if (!std::cin || n < 1) {
        throw std::runtime_error("Error! Invalid input for sequence end.");
        return 1;
    }

    std::cout << "Your result is: " << mult(n, 3) << std::endl;

    return 0;
}
