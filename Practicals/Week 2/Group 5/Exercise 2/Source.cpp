#include<iostream>

int main() {
	int n;
	std::cout << "Enter a number: ";
	std::cin >> n;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}
	if (n < 0) {
		std::cout << "You should enter POSITIVE numbers!" << std::endl;
		return 1;
	}

	char c;
	std::cout << "Enter a character: ";
	std::cin >> c;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}

	int newNum = (int)c + n;

	std::cout << "New character: " << (char)newNum << std::endl;

	return 1;
}
