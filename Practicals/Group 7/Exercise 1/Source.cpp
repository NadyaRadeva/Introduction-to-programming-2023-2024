#include<iostream>

int main() {
	std::cout << "Enter number X: ";
	int x;
	std::cin >> x;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}

	std::cout << "Enter number Y: ";
	int y;
	std::cin >> y;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}

	std::cout << "X + Y = " << x + y << std::endl;
	std::cout << "X - Y = " << x - y << std::endl;
	std::cout << "X * Y = " << x * y << std::endl;
	std::cout << "X % Y = " << x % y << std::endl;

	return 1;
}
