#include<iostream>
#include<cmath>

//Задачата е решена за правилна четириъгълна призма.

int main() {
	double height;
	double x1, y1, x2, y2, x3, y3, x4, y4;

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

	std::cout << "Enter the coordinates of point D: ";
	std::cin >> x4 >> y4;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}

	double sideA, sideB, sideC, sideD;

	sideA = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

	double surface = sideA * sideB;

	double volume = surface * height;

	std::cout << "The VOLUME of the prism is: " << volume << std::endl;

	return 1;
}
