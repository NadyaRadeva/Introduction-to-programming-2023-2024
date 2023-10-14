#include<iostream>

int main() {
	char c1, c2, c3;
	std::cout << "Enter three digits: ";
	std::cin >> c1 >> c2 >> c3;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	std::cout << c1 << c2 << c3 << std::endl;

	return 1;
}
