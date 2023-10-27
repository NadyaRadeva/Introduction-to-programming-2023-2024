#include<iostream>

int main() {
	unsigned int h1, m1, h2, m2;

	std::cout << "Enter start hour and minutes: ";
	std::cin >> h1 >> m1;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}
	if ((h1 < 0 || h1>23) || (m1 < 0 || m1>59)) {
		std::cout << "You have entered wrong hours and/or minutes!" << std::endl;
		return 1;
	}

	std::cout << "Enter end hour and minutes: ";
	std::cin >> h2 >> m2;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}
	if ((h2 < 0 || h2>23) || (m2 < 0 || m2>59)) {
		std::cout << "You have entered wrong hours and/or minutes!" << std::endl;
		return 1;
	}

	if (h1 > h2) {
		std::cout << "You have entered incorrect hours!" << std::endl;
	}
	else if (h1 == h2) {
		if (m1 > m2) {
			std::cout << "You have entered incorrect minutes!" << std::endl;
		}
	}
	else {
		int hourDifference = h2 - h1;
		int minuteDifference = m2 - m1;

		int totalMinutesDifference = hourDifference * 60 + minuteDifference;

		int steps60 = totalMinutesDifference / 60;
		totalMinutesDifference %= 60;
		int steps15 = totalMinutesDifference / 15;
		totalMinutesDifference %= 15;
		int steps5 = totalMinutesDifference / 5;
		int steps1 = totalMinutesDifference % 5;

		int totalSteps = steps60 + steps15 + steps5 + steps1;

		std::cout << "The minimum number of steps is: " << totalSteps << std::endl;
	}

	return 1;
}
