#include<iostream>

int main() {
	int a, b;
	std::cout << "Enter number A: ";
	std::cin >> a;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	std::cout << "Enter number B: ";
	std::cin >> b;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	int sum;
	sum = a + b;

	std::cout << a << " + " << b << " = " << sum << std::endl;

	return 1;
}
