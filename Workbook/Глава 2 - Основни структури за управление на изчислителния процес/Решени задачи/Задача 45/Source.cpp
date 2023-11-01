#include<iostream>
#include<iomanip>
#include<cmath>

int main() {
	int x, step, start, end;

	do {
		std::cout << "Enter the value of X (from 1 to 1000): ";
		std::cin >> x;
		if (!std::cin) {
			std::cout << "Error! You have entered wrong data!" << std::endl;
			return 1;
		}
	} while (x < 1 || x > 1000);

	std::cout << "*****************************************************************" << std::endl;

	std::cout << std::setw(5) << "x" << std::setw(15) << " ln(x)" << std::setw(15) << "lg(x)" << std::setw(15) << "x^(1/3)" << std::setw(15) << "x^(1/2)" << std::endl;

	std::cout << "*****************************************************************" << std::endl;

	std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(5);

	if (x <= 10) {
		start = 1;
		end = 1;
		step = 1;
	}
	else {
		if (x <= 100) {
			start = 20;
			end = 100;
			step = 10;
		}
		else {
			start = 200;
			end = 1000;
			step = 100;
		}
	}

	for (size_t i = start; i <= end; i = i + step) {
		std::cout << std::setw(5) << i << std::setw(15) << log(i) << std::setw(15) << log10(i) << std::setw(15) << pow(i, 1 / 3) << std::setw(15) << sqrt(i) << std::endl;
	}

	return 1;
}
