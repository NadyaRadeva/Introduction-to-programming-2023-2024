#include<iostream>

int main() {
	int a, b;
	std::cout << "Enter two numbers: ";
	std::cin >> a >> b;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	int min = a;
	if (min > b) {
		min = b;
	}

	std::cout << "The smallest number out of " << a << " and " << b << " is: " << min << std::endl;
	
	return 1;
}
