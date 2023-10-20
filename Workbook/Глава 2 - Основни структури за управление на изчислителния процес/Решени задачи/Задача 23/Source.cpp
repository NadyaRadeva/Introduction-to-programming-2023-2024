#include<iostream>

int main() {
	double a, b, c;
	std::cout << "Enter the sides of the traingle: ";
	std::cin >> a >> b >> c;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}
	if (a <= 0 || b <= 0 || c <= 0) {
		std::cout << "You should enter positive numbers." << std::endl;
		return 1;
	}
	if (a >= b + c || b >= a + c || c >= a + b) {
		std::cout << "These numbers can not be sides of a triangle." << std::endl;
		return 1;
	}

	if (a == b && b == c) {
		std::cout << "The triangle is equilateral." << std::endl;
	}
	else {
		if (a == b || b == c || c == a) {
			std::cout << "The triangle is isoceles." << std::endl;
		}
		else {
			std::cout << "The triangle is scalene." << std::endl;
		}
	}

	double a2 = a * a;
	double b2 = b * b;
	double c2 = c * c;

	if (a2 == b2 + c2 || b2 == a2 + c2 || c2 == a2 + b2) {
		std::cout << "The triangle is right." << std::endl;
	}
	else {
		if (a2 > b2 + c2 || b2 > a2 + c2 || c2 > a2 + b2) {
			std::cout << "The triangle is obtuse." << std::endl;
		}
		else {
			std::cout << "The triangle is acute." << std::endl;
		}
	}

	return 1;
}
