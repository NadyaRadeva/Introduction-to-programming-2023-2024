#include<iostream>

int main() {
	unsigned int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	if (!std::cin) {
		throw std::runtime_error("Invalid data!");
	}
	if (number < 0) {
		throw std::runtime_error("Invalid number!");
	}

	int seen[10] = {};

	unsigned temp = number;
	while (temp) {
		seen[temp % 10] += 1;
		temp /= 10;
	}

	bool foundRepeating = false;
	for (int i = 0; i < 10; i++) {
		if (seen[i] > 1) {
			foundRepeating = true;
			break;
		}
	}

	std::cout << (foundRepeating ? "Not with unique digits" : "With unique digits") << std::endl;

	return 1;
}
