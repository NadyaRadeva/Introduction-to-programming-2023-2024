#include<iostream>
#include<cmath>

int main() {
	double height;
	double x1, y1, x2, y2, x3, y3;

	std::cout << "Enter height: ";
	std::cin >> height;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}
	if (height <= 0) {
		std::cout << "You should enter POSITIVE numbers!" << std::endl;
		return 1;
	}

	std::cout << "Enter the coordinates of point A: ";
	std::cin >> x1 >> y1;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}

	std::cout << "Enter the coordinates of point B: ";
	std::cin >> x2 >> y2;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}

	std::cout << "Enter the coordinates of point C: ";
	std::cin >> x3 >> y3;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}

	double sideA, sideB, sideC;

	sideA = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	sideB = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	sideC = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));

	double halfPerimeter = (sideA + sideB + sideC) / 2;

	double surface = sqrt(halfPerimeter * (halfPerimeter - sideA) * (halfPerimeter - sideB) * (halfPerimeter - sideC));

	double volume = surface * height;

	std::cout << "The VOLUME of the prism is: " << volume << std::endl;

	return 1;
}
