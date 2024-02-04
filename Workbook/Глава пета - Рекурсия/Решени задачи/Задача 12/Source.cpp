#include<iostream>

int countDigit(int n, int k);

int countDigit(int n, int k) {
	if (n < 10) {
		return n == k;
	}
	return (n % 10 == k) + countDigit(n / 10, k);
}

int main() {
	int n, k;
	std::cout << "Enter the values of n and k: ";
	std::cin >> n >> k;
	if (!std::cin) {
		throw std::runtime_error("Error! Invalid input!");
		return 1;
	}

	std::cout << "Result: " << countDigit(n, k) << std::endl;

	return 0;
}
