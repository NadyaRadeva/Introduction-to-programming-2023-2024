#include<iostream>
#include<iomanip>

bool isPrime(int number);

bool isPrime(int number) {
	for (size_t i = 2; i <= number / 2; ++i) {
		if (number % i != 0) {
			return true;
		}
	}

	return false;
}

int main() {
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	if (!std::cin) {
		throw std::runtime_error("Invalid input!");
		return -1;
	}

	std::cout << number << " is prime. - " << std::boolalpha << isPrime(number) << std::endl;

	return 0;
}
