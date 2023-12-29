#include<iostream>

double findSum(double x, int n);

double findSum(double x, int n) {
	if (n == 2) {
		return x + 2;
	}

	return findSum(n - 1, x) * x + n;
}

int main() {
	int n;
	std::cout << "Enter the value of N: ";
	std::cin >> n;
	if (!std::cin) {
		throw std::runtime_error("Invalid input!");
		return -1;
	}

	double x;
	std::cout << "Enter the value of X: ";
	std::cin >> x;
	if (!std::cin) {
		throw std::runtime_error("Invalid input!");
		return -1;
	}

	std::cout << "The sum is: ";
	findSum(x,n);

	std::cout << std::endl;

	return 0;
}
