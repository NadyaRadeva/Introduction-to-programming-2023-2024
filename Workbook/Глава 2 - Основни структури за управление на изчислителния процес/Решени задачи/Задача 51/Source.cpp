#include<iostream>

int main() {
	int x;
	unsigned int y;
	std::cout << "Enter the value of X: ";
	std::cin >> x;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	std::cout << "Enter the value of Y: ";
	std::cin >> y;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}
	if (y < 0) {
		std::cout << "Error! You should enter a number equal or bigger tna 1!" << std::endl;
	}

	int val = 1;

	if (y == 0) {
		std::cout << "The value of " << x << " raised to the power of " << y << " is " << val << "." << std::endl;
	}
	else {
		for (size_t i = 1; i <= y; ++i) {
			val *= x;
		}
		std::cout << "The value of " << x << " raised to the power of " << y << " is " << val << "." << std::endl;
	}

	return 1;
}
