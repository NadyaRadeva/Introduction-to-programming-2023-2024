#include<iostream>

double Hermite(double x, int n);

double Hermite(double x, int n) {
	if (n == 0) {
		return 1;
	}
	if (n == 1) {
		return 2*x;
	}

	return 2 * x * Hermite(x, n - 1) - 2 * (n - 1) * Hermite(x, n - 2);
}

int main() {
	double x;
	int n;
	std::cout << "Enter the value of X and N: ";
	std::cin >> x >> n;
	if (!std::cin) {
		throw std::runtime_error("Invalid input!");
		return 1;
	}

	std::cout << "The value of Hermite's polinome is: " << Hermite(x, n) << std::endl;

	return 0;
}
