#include<iostream>

int checkRightmostBit(int number);

int checkRightmostBit(int number) {
	return number & 1;
}

int main() {
	std::cout << "Enter a number: ";
	int number;
	std::cin >> number;
	if (!std::cin) {
		throw std::runtime_error("Invalid data!");
	}

	std::cout << "The rightmost bit of " << number << " is: " << checkRightmostBit(number) << std::endl;

	return 1;
}
