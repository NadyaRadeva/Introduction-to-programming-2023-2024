#include<iostream>
#include<cmath>
#include<iomanip>

int main() {
	int n;
	std::cout << "Enter a number: ";
	std::cin >> n;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	bool isPrime = true;

	if (n <= 1) {
		isPrime = false;
	}

	for (size_t i = 2; i < n/2; ++i) {
		if (n % i == 0) {
			isPrime = false;
			break;
		}
	}

	std::cout << n << " is prime. - " << std::boolalpha << isPrime << std::endl;

	return 1;
}
