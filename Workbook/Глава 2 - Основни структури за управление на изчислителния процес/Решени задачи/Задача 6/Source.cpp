#include<iostream>

int main() {
	double a, b, c;
	std::cout << "Enter three numbers: ";
	std::cin >> a >> b >> c;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	if (a > b) {
		double m = a;
		a = b;
		b = m;
	}
	if (a > c) {
		double m = a;
		a = c;
		c = m;
	}
	if (b > c) {
		double m = b;
		b = c;
		c = m;
	}

	std::cout << a << " " << b << " " << c << std::endl;

	return 1;
}
