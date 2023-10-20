#include<iostream>

int main() {
	double a, b;
	std::cout << "Enter the value of A and B: ";
	std::cin >> a >> b;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	if (a == 0) {
		if (b == 0) {
			std::cout << "Every x can a solution of the equation." << std::endl;
		}
		else {
			std::cout << "The equation doesn't have a solution." << std::endl;
		}
	}
	else {
		std::cout << "The solution of the equation is " << b / a << "." << std::endl;
	}

	return 1;
}
