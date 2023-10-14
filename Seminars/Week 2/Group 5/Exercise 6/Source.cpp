#include<iostream>

int main() {
	int n;
	std::cout << "Enter a number with four digits: ";
	std::cin >> n;
	if (!std::cin) {
		std::cout << "Error! You have entered wring data!" << std::endl;
		return 1;
	}
	if (n < 1000 || n > 9999) {
		std::cout << "Error! You have entered wrong number!" << std::endl;
		return 1;
	}

	int fourthDigit = n % 10;
	int thirdDigit = (n / 10) % 10;
	int firstDigit = n / 1000;
	int secondDigit = (n / 100) % 10;

	std::cout << fourthDigit << " - " << thirdDigit << " - " << secondDigit << " - " << firstDigit << std::endl;

	return 1;
}
