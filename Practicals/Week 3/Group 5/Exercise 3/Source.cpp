#include<iostream>

int main() {
	int n;
	std::cout << "Enter a number: ";
	std::cin >> n;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	int factoriel = 1;

	for (size_t i = 1; i <= n; ++i) {
		factoriel *= i;
	}

	std::cout << n << "! = " << factoriel << std::endl;

	return 1;
}
