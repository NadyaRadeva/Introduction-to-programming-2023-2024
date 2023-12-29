#include<iostream>

int findSumOfDigits(int number);

int findSumOfDigits(int number) {
	if (!number) {
		return 0;
	}

	return number % 10 + findSumOfDigits(number / 10);
}

int main() {
	std::cout << "Enter a number: ";
	int number;
	std::cin >> number;
	if (!std::cin) {
		throw std::runtime_error("Invalid input!");
		return -1;
	}

	std::cout << "The sum of the digits of " << number << " is: " << findSumOfDigits(number) << std::endl;

	return 0;
}
