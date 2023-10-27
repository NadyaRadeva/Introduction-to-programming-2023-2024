#include<iostream>

int exponentiation(int p, unsigned int n) {
	int pr = 1;

	for (size_t i = 0; i < n; ++i) {
		pr *= p;
	}

	return pr;
}

int main() {
	int p;
	unsigned int n;

	std::cout << "Enter base: ";
	std::cin >> p;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	std::cout << "Enter exponent: ";
	std::cin >> n;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}
	if (n < 0) {
		std::cout << "Error! You should enter a positive number!" << std::endl;
		return 1;
	}

	std::cout << p << " raised to the power of " << n << " is: " << exponentiation(p, n) << std::endl;

	return 1;
}
