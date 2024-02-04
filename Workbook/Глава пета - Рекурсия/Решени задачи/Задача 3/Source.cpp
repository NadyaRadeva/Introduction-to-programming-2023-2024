#include<iostream>

int mult(int m, int n);

int mult(int m, int n) {
	if (n == 1) {
		return m;
	}

	return mult(m, n - 1) + m;
}

int main() {
	int m, n;
	std::cout << "Enter the values of M and N: ";
	std::cin >> m >> n;
	if (!std::cin) {
		throw std::runtime_error("Error! Invalid input!");
		return 1;
	}

	std::cout << "m*n = " << mult(m, n) << std::endl;

	return 0;
}
