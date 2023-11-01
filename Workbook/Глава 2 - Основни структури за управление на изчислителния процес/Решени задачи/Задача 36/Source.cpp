#include<iostream>

int main() {
	double x, y;
	std::cout << "Enter the value of X: ";
	std::cin >> x;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	y = 1;

	for (size_t i = 0; i <= 11; ++i) {
		y = y * x + i;
	}

	std::cout << "y = " << y << std::endl;

	return 1;
}
