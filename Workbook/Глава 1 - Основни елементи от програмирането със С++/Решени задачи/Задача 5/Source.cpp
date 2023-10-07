#include<iostream>

int main() {
	std::cout << "Enter age in YEARS: ";
	int ageInYears;
	std::cin >> ageInYears;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}
	if (ageInYears < 0) {
		std::cout << "You have entered wrong age!" << std::endl;
		return 1;
	}

	int ageInDays = ageInYears * 365;
	std::cout << "You have lived for more than " << ageInDays << " days." << std::endl;

	int ageInHours = ageInDays * 24;
	int ageInMinutes = ageInHours * 60;
	int ageInSeconds = ageInMinutes * 60;

	std::cout << "Your age in HOURS is approximately " << ageInHours << "." << std::endl;
	std::cout << "Your age in MINUTES is approximately " << ageInMinutes << "." << std::endl;
	std::cout << "Your age in SECONDS is approximately " << ageInSeconds << "." << std::endl;

	return 1;
}
