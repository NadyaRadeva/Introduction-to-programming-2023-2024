#include<iostream>

void setKthBitToOne(int& n, int k) {
	n |= (1 << (k - 1));
}

void toggleKthBit(int& n, int k) {
	n ^= (1 << (k - 1));
}

int main() {
	std::cout << "Enter a number: ";
	int number;
	std::cin >> number;
	if (!std::cin || number < 0) {
		throw std::runtime_error("Invalid data!");
	}

	std::cout << "Enter a position in the number: ";
	unsigned int k;
	std::cin >> k;
	if (!std::cin || k < 0) {
		throw std::runtime_error("Invalid data!");
	}

	setKthBitToOne(number, k);
	std::cout << "The new number is: " << number << std::endl;

	toggleKthBit(number, k);
	std::cout << number << std::endl;

	return 1;
}
