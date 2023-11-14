#include<iostream>

int countSetBits(int number);

int countSetBits(int number) {
	int count = 0;

	while (number > 0) {
		count += number & 1;
		number >>= 1;
	}

	return count;
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

	int setBitsCount = countSetBits(number);

	std::cout << "Count of the set bits in the number " << number << " is : " << setBitsCount << std::endl;

	return 1;
}
