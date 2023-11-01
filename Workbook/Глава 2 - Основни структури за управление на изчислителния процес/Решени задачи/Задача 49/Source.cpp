#include<iostream>
#include<iomanip>

bool isPrime(int n);

bool isPrime(int n) {
	if (n == 1) {
		return false;
	}

	for (size_t i = 2; i <= n / 2; ++i) {
		if (n % i != 0) {
			return true;
		}
	}
}

int main() {
	int k;

	do {
		std::cout << "Enter a number: ";
		std::cin >> k;
		if (!std::cin) {
			std::cout << "Error! You have entered wrong data!" << std::endl;
			return 1;
		}
	} while (k < 1);

	std::cout << k << " is prime? - " << std::boolalpha << isPrime(k) << std::endl;

	return 1;
}
