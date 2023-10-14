#include<iostream>

int main() {
	int a, b;
	std::cout << "Enter two numbers: ";
	std::cin >> a >> b;
	if (!std::cin) {
		std::cout << "You have entered wrong data!" << std::endl;
		return 1;
	}
	
	int c;

	c = a;
	a = b;
	b = c;

	std::cout << "A = " << a << std::endl;
	std::cout << "B = " << b << std::endl;

	return 1;
}
