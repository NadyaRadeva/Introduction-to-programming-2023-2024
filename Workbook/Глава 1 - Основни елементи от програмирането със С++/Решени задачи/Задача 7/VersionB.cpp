#include<iostream>
#include<cmath>

int main() {
	double sideA, sideB, sideC;

	std::cout << "Enter size of side A: ";
	std::cin >> sideA;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}
	if (sideA <= 0) {
		std::cout << "You should enter POSITIVE numbers!" << std::endl;
		return 1;
	}

	std::cout << "Enter size of side B: ";
	std::cin >> sideB;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}
	if (sideB <= 0) {
		std::cout << "You should enter POSITIVE numbers!" << std::endl;
		return 1;
	}

	std::cout << "Enter size of side C: ";
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
	double surface;
	surface = sqrt(halfPerimeter * (halfPerimeter - sideA) * (halfPerimeter - sideB) * (halfPerimeter - sideC));

	std::cout << "The SURFACE of the triangle is: " << surface << std::endl;

	return 1;
}
