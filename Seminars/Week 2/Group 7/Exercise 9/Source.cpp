#include<iostream>

int main() {
	int x1, y1, x2, y2, x3, y3, x4, y4;

	std::cout << "Enter coordinates of point 1: ";
	std::cin >> x1 >> y1;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	std::cout << "Enter the coordinates of point 2: ";
	std::cin >> x2 >> y2;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	std::cout << "Enter the coordinates of point 3: ";
	std::cin >> x3 >> y3;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	std::cout << "Enter the coordinates of point 4: ";
	std::cin >> x4 >> y4;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	double side1, side2, side3, side4, diag1, diag2;

	side1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	side2 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	side3 = sqrt((x4 - x3) * (x4 - x3) + (y4 - y3) * (y4 - y3));
	side4 = sqrt((x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4));
	diag1 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	diag2 = sqrt((x4 - x2) * (x4 - x2) + (y4 - y2) * (y4 - y2));

	if (side1 == side2 == side3 == side4 && side1 + side2 == diag1 && side4 + side3 == diag1 && side1 + side4 == diag2 && side3 + side2 == diag2) {
		std::cout << "The points form a square." << std::endl;
	}
	else {
		std::cout << "The points do not form a square." << std::endl;
	}

	return 1;
}
