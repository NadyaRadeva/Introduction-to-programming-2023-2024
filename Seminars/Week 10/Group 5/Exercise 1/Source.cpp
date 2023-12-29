#include<iostream>

void toBinary(int number);

void toBinary(int number) {
	if (number == 0) {
		return;
	}

	toBinary(number / 2);
	std::cout << number % 2;
}

int main() {
	int number;
	std::cout << "Enter a number to be turned into binary: ";
	std::cin >> number;
	if (!std::cin) {
		throw std::runtime_error("Invalid input!");
		return -1;
	}

	std::cout << "The binary number is: ";
	toBinary(number);

	std::cout << std::endl;

	return 0;
}
