#include<iostream>
#include<cmath>

int main() {
	double a, b, c;

	std::cout << "Enter number A: ";
	std::cin >> a;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}

	std::cout << "Enter number B: ";
	std::cin >> b;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}

	std::cout << "Enter number C: ";
	std::cin >> c;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
	}

	double meanSquare = sqrt((a * a + b * b + c * c) / 3);

	std::cout << "The mean square of numbers A, B and C is " << meanSquare << " ." << std::endl;

	return 1;
}
