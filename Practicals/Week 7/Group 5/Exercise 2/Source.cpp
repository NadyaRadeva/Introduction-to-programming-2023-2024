#include<iostream>

int getKthBit(int number, unsigned int k);

int getKthBit(int number, unsigned int k) {
	return (number >> (k - 1)) & 1;
}

int main() {
	std::cout << "Enter a number: ";
	int number;
	std::cin >> number;
	if (!std::cin) {
		throw std::runtime_error("Invalid data!");
	}

	std::cout << "Enter a position in the number: ";
	unsigned int k;
	std::cin >> k;
	if (!std::cin || k < 0) {
		throw std::runtime_error("Invalid data!");
	}

	std::cout << "The rightmost bit of " << number << " is: " << getKthBit(number, k) << std::endl;

	return 1;
}
