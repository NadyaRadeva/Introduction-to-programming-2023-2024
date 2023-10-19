#include<iostream>

int main() {
	double x;
	std::cout << "Enter a number: ";
	std::cin >> x;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	double a, b;
	std::cout << "Define the interval: ";
	std::cin >> a >> b;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	if (a > b) {
		double c = a;
		a = b;
		b = c;
	}

	if (x >= a && x <= b) {
		std::cout << "The number " << x << " belongs in the interval." << std::endl;
		return 1;
	}
	else {
		std::cout << "The number " << x << " does not belong in the interval." << std::endl;
		return 1;
	}

	return 1;
}
