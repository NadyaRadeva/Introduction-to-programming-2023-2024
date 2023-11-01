#include<iostream>
#include<cmath>

int main() {
	double x;
	std::cout << "Enter a number: ";
	std::cin >> x;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}
	if (x <= 1) {
		std::cout << "You should enter a number bigger than 1!" << std::endl;
		return 1;
	}

	for (size_t i = int(ceil(x + log(x))); i <= int(floor(x * x + 2 * x + exp(x))); ++i) {
		std::cout << i << std::endl;
	}

	return 1;
}
