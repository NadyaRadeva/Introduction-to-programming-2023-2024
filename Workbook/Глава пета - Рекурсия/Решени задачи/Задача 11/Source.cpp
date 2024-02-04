#include<iostream>

bool digit(int n, int k);

bool digit(int n, int k) {
	if (n < 10) {
		return n == k;
	}

	return (n % 10 == k) || digit(n / 10, k);
}

int main() {
	int n, k;
	std::cout << "Enter the values of n and k: ";
	std::cin >> n >> k;
	if (!std::cin) {
		throw std::runtime_error("Error! Invalid input!");
		return 1;
	}

	std::cout << digit(n, k) << std::endl;

	return 0;
}
