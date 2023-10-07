#include<iostream>
#include<cmath>

int main() {
	std::cout << "Enter bool value (0 or 1): ";
	int a;
	std::cin >> a;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}
	if (a != 0 || a != 1) {
		std::cout << "You should enter 0 or 1!" << std::endl;
		return 1;
	}

	int b;
	std::cin >> b;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}
	if (b != 0 || b != 1) {
		std::cout << "You should enter 0 or 1!" << std::endl;
		return 1;
	}

	bool nand = !(a && b);
	std::cout << a << " nand " << b << " = " << nand << std::endl;

	return 1;
}
