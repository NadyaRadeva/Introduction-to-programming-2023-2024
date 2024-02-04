#include<iostream>

int gcd(int m, int n);

int gcd(int m, int n) {
	if (n == 0) {
		return m;
	}

	return gcd(n, m % n);
}

int main() {
	int m, n;
	std::cout << "Enter the value of your numbers: ";
	std::cin >> m >> n;
	if (!std::cin) {
		throw std::runtime_error("Error! Invalid input!");
		return 1;
	}

	std::cout << "The greatest common divisor of m and n is: " << gcd(m, n) << std::endl;

	return 0;
}
