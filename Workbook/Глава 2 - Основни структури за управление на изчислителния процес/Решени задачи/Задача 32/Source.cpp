#include<iostream>

const double PI = 3.14159265;

int main() {
	double a, b, alpha;

	do {
		std::cout << "Enter the value of A: ";
		std::cin >> a;
	} while (a <= 0);

	do {
		std::cout << "Enter the value of B: ";
		std::cin >> b;
	} while (b <= 0);

	do {
		std::cout << "Enter the value of an angle: ";
		std::cin >> alpha;
	} while (alpha <= 0 || alpha >= 180);

	alpha = PI / 180 * alpha;

	double s = 0;

	s = a * b * sin(alpha) / 2;

	std::cout << "The surface of the triangle is: " << s << std::endl;

	return 1;
}
