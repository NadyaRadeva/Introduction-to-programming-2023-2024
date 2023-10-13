#include<iostream>

int main() {
	int year;
	std::cout << "Enter a year: ";
	std::cin >> year;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}
	if (year <= 0) {
		std::cout << "You should enter POSITIVE numbers!" << std::endl;
		return 1;
	}

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		std::cout << "This is a leap year!" << std::endl;
	}
	else {
		std::cout << "This is not a leap year!" << std::endl;
	}
		
	return 1;
}
