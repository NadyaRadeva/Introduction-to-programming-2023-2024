#include<iostream>

int main() {
	int a, b, c;
	std::cout << "Enter three numbers: ";
	std::cin >> a >> b >> c;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}

	if (a <= b && a <= c) {
		std::cout << "The smallest number is: " << a << std::endl;
	}
	if (b <= a && b <= c) {
		std::cout << "The smallest number is:" << b << std::endl;
	}
	if (c <= a && c <= b) {
		std::cout << "The smallest number is: " << c << std::endl;
	}

	return 1;
}
