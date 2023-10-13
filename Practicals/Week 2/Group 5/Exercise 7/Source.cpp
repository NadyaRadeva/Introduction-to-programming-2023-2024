#include<iostream>

int main() {
	int a, b, c;
	std::cout << "Enter three numbers: ";
	std::cin >> a >> b >> c;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}

	if (a <= 0 || b <= 0 || c <= 0) {
		std::cout << "Error! Lengths are positive numbers!" << std::endl;
		return 1;
	}

	double val;

	if (a >= b && a >= c) {
		val = (b * b + c * c - a * a) / (2 * b * c);
	}
	else if (b >= a && b >= c) {
		val = (a * a + c * c - b * b) / (2 * a * c);
	}
	else {
		val = (a * a + b * b - c * c) / (2 * a * b);
	}

	if (val > 0) {
		std::cout << "The triangle is acute." << std::endl;
	}
	else if (val == 0) {
		std::cout << "The triangle is right." << std::endl;
	}
	else {
		std::cout << "The triangle is obtuse." << std::endl;
	}

	return 1;
}
