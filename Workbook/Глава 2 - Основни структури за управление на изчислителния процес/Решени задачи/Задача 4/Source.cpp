#include<iostream>

int main() {
	char c1, c2, c3;
	std::cout << "Enter three symbols: ";
	std::cin >> c1 >> c2 >> c3;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	int number = ((c1 - '0') * 10 + (c2 - '0')) * 10 + (c3 - '0');
	std::cout << "The number is: " << number << std::endl;

	return 1;
}
