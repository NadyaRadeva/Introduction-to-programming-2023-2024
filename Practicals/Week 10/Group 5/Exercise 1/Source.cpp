#include<iostream>

int exponent(unsigned int n, int m) {
	if (m == 0) {
		return 1;
	}
	
	return n * exponent(n, m - 1);
}

int main() {
	std::cout << "Enter the value of N: ";
	unsigned int n;
	std::cin >> n;
	if (!std::cin || n <= 0) {
		throw std::runtime_error("Invalid input!");
		return -1;
	}

	std::cout << "Enter the value of M: ";
	int m;
	std::cin >> m;
	if (!std::cin) {
		throw std::runtime_error("Invalid input!");
		return -1;
	}

	std::cout << "N^M is: " << exponent(n, m) << std::endl;

	return 0;
}
