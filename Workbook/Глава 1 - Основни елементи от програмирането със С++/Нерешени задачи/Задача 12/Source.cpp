#include<iostream>
#include<cmath>

int main() {
	double side;

	std::cout << "Enter the side of the triangle: ";
	std::cin >> side;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}
	if (side <= 0) {
		std::cout << "You should enter a POSITIVE number!" << std::endl;
		return 1;
	}

	double perimeter, surface;

	perimeter = 3 * side;
	surface = sqrt((perimeter / 2) * (perimeter / 2 - side) * (perimeter / 2 - side) * (perimeter / 2 - side));

	std::cout << "The PERIMETER of the triangle is: " << perimeter << std::endl;
	std::cout << "The SURFACE of the triangle is: " << surface << std::endl;

	return 1;
}
