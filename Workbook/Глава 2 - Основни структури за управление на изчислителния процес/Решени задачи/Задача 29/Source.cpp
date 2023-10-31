#include<iostream>

int main() {
	int day, month, year;
	std::cout << "Enter a day, a month and a year: ";
	std::cin >> day >> month >> year;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	int dayCount;

	bool isValid;

	isValid = (year >= 1900) && (year <= 9999) && (month >= 1) && (month <= 12) && (day >= 1) && (day <= 31);

	if (isValid) {
		bool isLeapYear = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400);
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
		if (day > dayCount) {
			isValid = false;
		}
	}

	if (isValid) {
		std::cout << "The date you have entered is valid." << std::endl;
	}
	else {
		std::cout << "The date you have entered is not valid." << std::endl;
	}

	return 1;
}
