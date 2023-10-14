#include<iostream>

int main() {
	int n;
	std::cout << "Enter a number: ";
	std::cin >> n;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	if (n % 2 == 0) {
		std::cout << "The number is even!" << std::endl;
	}
	else {
		std::cout << "The number is odd!" << std::endl;
	}

	return 1;
}
