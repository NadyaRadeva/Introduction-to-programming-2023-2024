#include<iostream>

int main() {
	int year;
	std::cout << "Enter a year: ";
	std::cin >> year;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}
	if (year <= 0) {
		std::cout << "You should enter a positive number!" << std::endl;
		return 1;
	}

	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
		std::cout << "You have entered a leap year." << std::endl;
		return 1;
	}
	else {
		std::cout << "You have not entered a leap year!" << std::endl;
		return 1;
	}

	return 1;
}
