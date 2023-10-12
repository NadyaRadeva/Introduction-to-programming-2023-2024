#include<iostream>

int main() {
	std::cout << "Enter length of side: ";
	double side;
	std::cin >> side;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}
	if (side <= 0) {
		std::cout << "You should enter POSITIVE numbers!" << std::endl;
		return 1;
	}

	std::cout << "Enter height: ";
	double height;
	std::cin >> height;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}
	if (height <= 0) {
		std::cout << "You should enter POSITIVE numbers!" << std::endl;
		return 1;
	}

	double surface = (side * height) / 2;

	std::cout << "The surface of the triangle is: " << surface << std::endl;

	return 1;
}
