#include<iostream>

int main() {
	unsigned int h1, m1, h2, m2;

	std::cout << "Digital clock 1: " << std::endl;
	std::cout << "Enter hour and minutes: ";
	std::cin >> h1 >> m1;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}
	if ((h1 < 0 || h1>23) || (m1 < 0 || m1>59)) {
		std::cout << "You have entered wrong hours and/or minutes!" << std::endl;
		return 1;
	}

	std::cout << "Digital clock 2: " << std::endl;
	std::cout << "Enter hour and minutes: ";
	std::cin >> h2 >> m2;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}
	if ((h2 < 0 || h2>23) || (m2 < 0 || m2>59)) {
		std::cout << "You have entered wrong hours and/or minutes!" << std::endl;
		return 1;
	}

	unsigned int time1 = h1 * 60 + m1;
	unsigned int time2 = h2 * 60 + m2;

	unsigned int diff;

	if (time1 < time2) {
		std::cout << "The second clock is \"after\" the first one." << std::endl;
		diff = time2 - time1;
	}
	else {
		std::cout << "The first clock is \"after\" the second one." << std::endl;
		diff = time1 - time2;
	}


	unsigned int newH = diff / 60;
	unsigned int newM = (diff % 60);

	if (diff > 60) {
		std::cout << "The difference between the clocks is " << newH << " hours and " << newM << " minutes." << std::endl;
	}
	else if (diff == 60) {
		std::cout << "The difference between the clocks is one hour." << std::endl;
	}
	else {
		std::cout << "The difference between the clocks is " << diff << " minutes." << std::endl;
	}

	return 1;
}
