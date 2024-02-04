#include<iostream>

double manualPow(double x, int y);

double manualPow(double x, int y) {
	if (y == 0) {
		return 1;
	}

	return x * manualPow(x, y - 1);
}

int main() {
	double x;
	int y;
	std::cout << "Enter the values of x and y (x^y): ";
	std::cin >> x >> y;
	if (!std::cin) {
		throw std::runtime_error("Error! Invalid input!");
		return 1;
	}

	std::cout << "The value of the manual function is: " << manualPow(x, y) << std::endl;
	std::cout << "The value of the in-build function pow is: " << pow(x, y) << std::endl;

	return 0;
}
