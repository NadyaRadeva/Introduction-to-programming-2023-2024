#include<iostream>

int main() {
	int a, b;
	std::cout << "Enter two numbers: ";
	std::cin >> a >> b;
	if (!std::cin) {
		std::cout << "You have entered wrong data!" << std::endl;
		return 1;
	}
	
	b = a + b;
	a = b - a;
	b = b - a;

	std::cout << "A = " << a << std::endl;
	std::cout << "B = " << b << std::endl;

	return 1;
}
