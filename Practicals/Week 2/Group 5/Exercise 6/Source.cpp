#include<iostream>
#include<cmath>

int main() {
	int a, b, c;
	std::cout << "Enter three numbers: ";
	std::cin >> a >> b >> c;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}

	if (a <= 0 || b <= 0 || c <= 0) {
		std::cout << "Error! Lengths are positive numbers!" << std::endl;
		return 1;
	}

	if (a + b > c || b + c > a || a + c > b) {
		std::cout << "These are valid lengths!" << std::endl;
	}
	else {
		std::cout << "These are not valid lengths!" << std::endl;
	}

	return 1;
}
