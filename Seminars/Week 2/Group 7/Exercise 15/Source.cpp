#include <iostream>

int main() {
    unsigned int length, width, height, weight;

    std::cout << "Enter length, width, height, and weight: ";
    std::cin >> length >> width >> height >> weight;

    if (!std::cin) {
        std::cout << "Error! You have entered invalid data!" << std::endl;
        return 1;
    }

    if (weight <= 0 || length <= 0 || height <= 0 || width <= 0) {
        std::cout << "You should enter positive numbers!" << std::endl;
        return 1;
    }

    bool isBulky = (length > 50 || width > 50 || height > 50 || length * width * height > 50000);
    bool isHeavy = (weight >= 5);

    if (isBulky && isHeavy) {
        std::cout << "Both" << std::endl;
    }
    else if (isBulky) {
        std::cout << "Bulky" << std::endl;
    }
    else if (isHeavy) {
        std::cout << "Heavy" << std::endl;
    }
    else {
        std::cout << "Neither" << std::endl;
    }

    return 1;
}
