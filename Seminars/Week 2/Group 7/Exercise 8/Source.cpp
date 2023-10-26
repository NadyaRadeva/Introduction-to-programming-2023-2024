#include<iostream>

int main() {
	int x1, y1, x2, y2, x3, y3;
	std::cout << "Enter the coordinates of the first point: ";
	std::cin >> x1 >> y1;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	std::cout << "Enter the coordinates of the second point: ";
	std::cin >> x2 >> y2;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	std::cout << "Enter the coordinates of the third point: ";
	std::cin >> x3 >> y3;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	double side1, side2, side3;
	side1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	side2 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	side3 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));

	if (y1 == y2 == y3 || x1 == x2 == x3) {
		std::cout << "The three points are lay on a line." << std::endl;
	}
	else {
		if (side1 + side2 == side3 || side1 + side3 == side2 || side2 + side3 == side1) {
			std::cout << "The triangle is right." << std::endl;
		}
		else if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
			std::cout << "The triangle is acute." << std::endl;
		}
		if (side1 == side2 == side3) {
			std::cout << "The triangle is isoceles." << std::endl;
		}
	}

	return 1;
}
