#include<iostream>

bool isPrime(int number) {
	if (number <= 1) {
		return false;
	}

	
	for (int i = 2; i <= number / 2; i++) {
		if (number % i == 0) {
			return false;
		}
	}

	return true;
}

void allPrime(unsigned int a, unsigned int b) {
	for (size_t i = a; i <= b; ++i) {
		if (isPrime(i)) {
			std::cout << i << std::endl;
		}
	}
}

int main() {
	unsigned int a, b;

	std::cout << "Enter two numbers: ";
	std::cin >> a >> b;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}
	if (a < 0 || b < 0) {
		std::cout << "Error! You should enter two positive numbers!" << std::endl;
		return 1;
	}

	std::cout << "Prime numbers: " << std::endl;
	allPrime(a, b);
	
	return 1;
}
