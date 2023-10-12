#include<iostream>
#include<cmath>

int main() {
	std::cout << "Enter length of side A: ";
	double sideA;
	std::cin >> sideA;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}
	if (sideA <= 0) {
		std::cout << "You should enter POSITIVE numbers!" << std::endl;
		return 1;
	}

	std::cout << "Enter side B: ";
	double sideB;
	std::cin >> sideB;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}
	if (sideB <= 0) {
		std::cout << "You should enter POSITIVE numbers!" << std::endl;
		return 1;
	}

	std::cout << "Enter side C: ";
	double sideC;
	std::cin >> sideC;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}
	if (sideC <= 0) {
		std::cout << "You should enter POSITIVE numbers!" << std::endl;
		return 1;
	}

	double halfPerimeter = (sideA + sideB + sideC) / 2;

	double surface = sqrt(halfPerimeter * (halfPerimeter - sideA) * (halfPerimeter - sideB) * (halfPerimeter - sideC));

	std::cout << "The surface of the triangle is: " << surface << std::endl;

	return 1;
}
