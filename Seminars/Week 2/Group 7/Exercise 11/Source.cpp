#include<iostream>

int main() {
	unsigned int a, b;
	std::cout << "Enter two numbers: ";
	std::cin >> a >> b;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	if (a > b) {
		int c = a;
		a = b;
		b = c;
	}

	int oddCount = (b + 1) / 2 - (a / 2);

	std::cout << "The odd numbers in the interval [" << a << ", " << b << "] is: " << oddCount << std::endl;

	return 1;
}
