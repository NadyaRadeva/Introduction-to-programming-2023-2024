#include<iostream>

int main() {
	std::cout << "Enter a number: ";
	int n;
	std::cin >> n;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}

	bool isPrime = true;

	std::cout << "Prime numbers: ";
	if (n == 0 || n == 1) {
		isPrime = false;
	}
	for (int i = 2; i < n / 2; ++i) {
		if (n % i == 0) {
			isPrime = false;
		}
		if (isPrime == true) {
			std::cout << i << " ";
		}
	}
	std::cout << std::endl;

	return 1;
}
