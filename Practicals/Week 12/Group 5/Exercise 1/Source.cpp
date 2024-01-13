#include<iostream>

int minNumberOfTiles(unsigned int m, unsigned int n);

int minNumberOfTiles(unsigned int m, unsigned int n) {
	if (!n || !m) {
		return 0;
	}

	if (n % 2 != 0) {
		return m + minNumberOfTiles(n - 1, m);
	}
	if (m % 2 != 0) {
		return n + minNumberOfTiles(n, m - 1);
	}

	return minNumberOfTiles(n / 2, m / 2);
}

int main() {
	unsigned int n;
	unsigned int m;

	std::cout << "Enter the height of the rectangle: ";
	std::cin >> m;
	if (!std::cin || m < 0) {
		throw std::runtime_error("Invalid input!");
		return -1;
	}

	std::cout << "Enter the width of the rectangle: ";
	std::cin >> n;
	if (!std::cin || n < 0) {
		throw std::runtime_error("Invalid input!");
		return -1;
	}

	std::cout << "The minimum amount of tiles is: " << minNumberOfTiles(m, n) << std::endl;

	return 0;
}
