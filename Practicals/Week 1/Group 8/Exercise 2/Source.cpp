#include<iostream>

int main() {
	std::cout << "Enter a number: ";
	int n;
	std::cin >> n;
	if (!std::cin) {
		std::cout << "You entered WRONG data!" << std::endl;
		return 1;
	}

	std::cout << "New value: " << n * 2 << std::endl;

	return 1;
}
