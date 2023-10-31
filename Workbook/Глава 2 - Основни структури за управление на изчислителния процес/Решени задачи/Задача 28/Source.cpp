#include<iostream>

int main() {
	int month;
	std::cout << "Enter the number of a month: ";
	std::cin >> month;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}
	if (month <= 0 || month > 12) {
		std::cout << "You must enter a number between 1 and 12!" << std::endl;
		return 1;
	}

	std::cout << "The season is: ";

	switch (month) {
	case 12:
	case 1:
	case 2: std::cout << "winter" << std::endl; break;
	case 3: 
	case 4:
	case 5: std::cout << "spring" << std::endl; break;
	case 6:
	case 7:
	case 8: std::cout << "summer" << std::endl; break;
	case 9: 
	case 10:
	case 11: std::cout << "fall" << std::endl; break;
	}

	return 1;
}
