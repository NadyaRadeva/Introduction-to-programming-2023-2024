#include<iostream>

int main() {
	char c;
	std::cout << "Enter a symbol: ";
	std::cin >> c;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	std::cout << "ASCII code of the symbol: " << (int)c << std::endl;

	return 1;
}
