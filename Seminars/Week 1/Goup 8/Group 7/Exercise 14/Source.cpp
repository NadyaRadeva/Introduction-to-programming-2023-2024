#include<iostream>

int main() {
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}

	int lastDigit = number % 10;

	std::cout << "Last digit of the number: " << lastDigit << std::endl;

	if (number % 2 == 0) {
		std::cout << "The number is even!" << std::endl;
	}
	else {
		std::cout << "The number is odd!" << std::endl;
	}

	return 1;
}
