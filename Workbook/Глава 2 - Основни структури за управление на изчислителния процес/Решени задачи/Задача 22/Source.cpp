#include<iostream>

int main() {
	int month, year;
	int dayCount;
	std::cout << "Enter a month via number: ";
	std::cin >> month;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}
	if (month <= 0) {
		std::cout << "You should enter a positive number!" << std::endl;
		return 1;
	}

	std::cout << "Enter a year: ";
	std::cin >> year;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}
	if (year <= 0) {
		std::cout << "You should enter a postive number." << std::endl;
		return 1;
	}
	bool isLeapYear = ((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0;

	if (month == 2) {
		dayCount = 28 + isLeapYear;
	}
	else {
		if (month <= 7) {
			dayCount = 30 + (month % 2);
		}
		else {
			dayCount = 31 - (month % 2);
		}
	}

	std::cout << "The number of days in the month " << month << " of year " << year << " is " << dayCount << "." << std::endl;

	return 1;
}
