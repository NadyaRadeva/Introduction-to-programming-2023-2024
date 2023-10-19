#include<iostream>

int main() {
	double x, y;
	std::cout << "Enter the coordinates of the point: ";
	std::cin >> x >> y;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	if (x >= 1 && x <= 2 && y >= 1 && y <= 2) {
		std::cout << "The point is in the square." << std::endl;
		return 1;
	}
	else {
		std::cout << "The point is not in the square." << std::endl;
		return 1;
	}

	return 1;
}
