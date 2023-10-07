#include<iostream>

const double PI = 3.14159265;

int main() {
	double alpha; //въвеждаме стойността на alpha в градуси
	std::cout << "Enter the value of alpha: ";
	std::cin >> alpha;
	if (!std::cin) {
		std::cout << "You have entered the WRONG data!" << std::endl;
		return 1;
	}

	double alphaRadian;
	alphaRadian = PI / 180 * alpha;

	std::cout << alpha << " degrees are equal to " << alphaRadian << " radians." << std::endl;

	return 1;
}
