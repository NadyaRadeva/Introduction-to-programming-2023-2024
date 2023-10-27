#include<iostream>

int main() {
	unsigned int hour, minutes;
	std::cout << "Enter an hour: ";
	std::cin >> hour;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}
	
	std::cout << "Enter minutes: ";
	std::cin >> minutes;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	if (hour >= 0 && hour <= 23 && minutes>=0 && minutes<=59) {
		std::cout << "The time is correct!" << std::endl;
	}
	else {
		std::cout << "The time is incorrect!" << std::endl;
		return 1;
	}

	unsigned int findMinutes = hour * 60 + minutes;

	std::cout << findMinutes << " minutes have passed since 12 AM." << std::endl;

	int remainingSeconds = 60 * 60 * 24 - findMinutes * 60;

	std::cout << "Remaining seconds of the day: " << remainingSeconds << std::endl;

	unsigned int newHour, newMinutes;
	if (minutes + 15 > 60) {
		newHour = hour + 1;
		newMinutes = minutes - 60;
		std::cout << "After 15 minutes the time will be: " << newHour << ":" << newMinutes << std::endl;
	}
	else if (minutes + 15 == 60) {
		newHour = hour + 1;
		newMinutes = 0;
		std::cout << "After 15 minutes the time will be: " << newHour << ":" << newMinutes << "0" << std::endl;
	}
	else {
		newHour = hour;
		newMinutes = minutes + 15;
		std::cout << "After 15 minutes the time will be: " << newHour << ":" << newMinutes << std::endl;
	}


	return 1;
}
