#include<iostream>
#include<cmath>

int main() {
	int a, b, c;
	std::cout << "Enter three numbers: ";
	std::cin >> a >> b >> c;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}

	int d = b * b - 4 * a * c;
	if (d > 0) {
		int x1 = (-b + sqrt(d)) / (2 * a);
		int x2 = (-b - sqrt(d)) / (2 * a);
		std::cout << "There are two roots. They are: x1 = " << x1 << ", x2 = " << x2 << std::endl;
	}
	else if (d == 0) {
		int x = (-b) / (2 * a);
		std::cout << "The root is: x = " << x << std::endl;
	}
	else {
		std::cout << "The roots of the equation are not real numbers!" << std::endl;
	}

	return 1;
}
