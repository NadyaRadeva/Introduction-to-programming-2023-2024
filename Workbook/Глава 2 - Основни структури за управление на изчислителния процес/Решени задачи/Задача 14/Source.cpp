#include<iostream>
#include<cmath>

int main() {
	int a, b, c;
	std::cout << "Enter the three sides of the triangle: ";
	std::cin >> a >> b >> c;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	double d = b * b - 4 * a * c;
	if (a != 0 && d >= 0) {
		double radical = sqrt(d);
		double root1 = (-b + radical) / (2 * a);
		double root2 = (-b - radical) / (2 * a);
		std::cout << "The roots of the equation are: x1 = " << root1 << " and x2 = " << root2 << std::endl;
		return 1;
	}
	else {
		std::cout << "The roots of the equation are not real numbers!" << std::endl;
		return 1;
	}

	return 1;
}
