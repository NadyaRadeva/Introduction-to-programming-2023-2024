#include <iostream>

int main() {
    double celsTemp;
    std::cout << "Enter temperature: ";
    std::cin >> celsTemp;
    if (!std::cin) {
        std::cout << "Error! You have entered wrong data!" << std::endl;
        return 1;
    }

    double kelTemp = celsTemp + 273.15;
    double fahrTemp = celsTemp * 1.80 + 32.0;

    std::cout << "The temperature in Kelvin is: " << kelTemp;
    std::cout << "The temperature in Fahrenheit is: " << fahrTemp;

    return 1;
}
