#include<iostream>

int main() {
	double x, y;

	std::cout << "Enter the value of X: ";
	std::cin >> x;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	y = 11;

	for (size_t i = 10; i >= 1; i--) {
		y = y * x + i;
	}

	std::cout << "y = " << y << std::endl;

	return 1;
}
