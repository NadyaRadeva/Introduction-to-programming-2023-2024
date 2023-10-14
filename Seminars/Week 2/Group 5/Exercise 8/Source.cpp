#include<iostream>

int main() {
	double n;
	std::cout << "Enter a number: ";
	std::cin >> n;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	int wholePart = floor(n);

	std::cout << "Whole part of the number: " << wholePart << std::endl;

	return 1;
}
