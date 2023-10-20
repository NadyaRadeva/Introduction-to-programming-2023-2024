#include<iostream>

int main() {
	char c;
	std::cout << "Enter a symbol: ";
	std::cin >> c;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
		std::cout << "The symbol is a letter." << std::endl;
		return 1;
	}
	else {
		std::cout << "The symbol is not a letter." << std::endl;
		return 1;
	}

	return 1;
}
