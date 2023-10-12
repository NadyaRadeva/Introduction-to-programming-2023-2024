#include<iostream>

int main() {
	std::cout << "Enter number N: ";
	double n;
	std::cin >> n;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}
	if (n <= 0) {
		std::cout << "You should enter POSITIVE numbers!" << std::endl;
		return 1;
	}

	double v = n * n * n;

	std::cout << "Volume of the cube: " << v << std::endl;

	return 1;
}
