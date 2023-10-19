#include<iostream>

int main() {
	double x, y;
	std::cout << "Enter the coordinates of a point: ";
	std::cin >> x >> y;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	if (x == 0 && y == 0) {
		std::cout << "The point coincides with center of the coordinate system." << std::endl;
		return 1;
	}

	if (x == 0) {
		std::cout << "The point lays on the y-coordinate." << std::endl;
		return 1;
	}

	if (y == 0) {
		std::cout << "The point lays on the x-coordinate." << std::endl;
		return 1;
	}

	if (x > 0 && y > 0) {
		std::cout << "The point is in quadrant one." << std::endl;
		return 1;
	}

	if (x < 0 && y>0) {
		std::cout << "The point is in quadrant two." << std::endl;
		return 1;
	}

	if (x < 0 && y < 0) {
		std::cout << "The point is in quadrant three." << std::endl;
		return 1;
	}

	if (x > 0 && y < 0) {
		std::cout << "The point is in quadrant four." << std::endl;
		return 1;
	}

	return 1;
}
