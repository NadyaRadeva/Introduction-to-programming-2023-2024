#include<iostream>
#include<cmath>

int main() {
	double a, x;
	std::cout << "Enter the value of a: ";
	std::cin >> a;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	if (a > 0) {
		x = sqrt(fabs(a - 1)) / 5 * pow(a, 1 / 3);
	}
	else {
		x = log(a * a + 5) / a - 1;
	}

	std::cout << "The value of x is " << x << std::endl;

	return 1;
}
