#include<iostream>
#include<iomanip>

int main() {
	char c1, c2, c3;
	std::cout << "Enter the value of c1: ";
	std::cin >> c1;
	if (!std::cin || (c1 < '0' || c1 > '9')) {
		std::cout << "Entered data is wrong!" << std::endl;
		return -1;
	}

	std::cout << "Enter the value of c2: ";
	std::cin >> c2;
	if (!std::cin || (c2 < '0' || c2>'9')) {
		std::cout << "Entered data is wrong!" << std::endl;
		return -1;
	}

	std::cout << "Enter the value of c3: ";
	std::cin >> c3;
	if (!std::cin || (c3 < '0' || c3>'9')) {
		std::cout << "Entered data is wrong!" << std::endl;
		return -1;
	}

	int firstDigit, secondDigit, thirdDigit;

	firstDigit = c1 - '0';
	secondDigit = c2 - '0';
	thirdDigit = c3 - '0';

	int endNum = firstDigit * 100 + secondDigit * 10 + thirdDigit;

	std::cout << "Your number is: " << endNum << std::endl;

	return 0;
}
