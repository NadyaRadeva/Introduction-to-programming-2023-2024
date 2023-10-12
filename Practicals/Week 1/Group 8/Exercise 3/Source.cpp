#include<iostream>

int main() {
	std::cout << "Enter degrees in Fahrenheit: ";
	int degF;
	std::cin >> degF;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}

	int degCels = (degF - 32) * 5 / 9;

	std::cout << "Degrees in Celsius: " << degCels << std::endl;

	return 1;
}
