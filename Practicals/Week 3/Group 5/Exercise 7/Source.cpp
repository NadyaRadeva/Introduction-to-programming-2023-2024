#include <iostream>

int main() {
	int n;
	std::cout << "Enter a number: ";
	std::cin >> n;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}
	if (n <= 0) {
		std::cout << "You should enter a positive number." << std::endl;
		return 1;
	}

	int currentNumber = 1;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			std::cout << currentNumber << " ";
			currentNumber++;
		}
		std::cout << std::endl;
	}

	return 0;
}
