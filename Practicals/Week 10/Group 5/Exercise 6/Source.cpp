#include<iostream>

int fastExp(int n, int m);

int fastExp(int n, int m) {
	if (m == 0) {
		return 1;
	}

	if (m % 2 != 0) {
		return n * fastExp(n * n, (m - 1) / 2);
	}
	else {
		return fastExp(n * n, m / 2);
	}
}

int main() {
	std::cout << "Enter the value of N: ";
	int n;
	std::cin >> n;
	if (!std::cin) {
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

	std::cout << "N^M is: " << fastExp(n, m) << std::endl;

	return 0;
}
