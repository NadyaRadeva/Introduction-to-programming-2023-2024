#include<iostream>

int main() {
	std::cout << "Enter the value of N (n>=1): ";
	int n;
	std::cin >> n;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}
	if (n < 1) {
		std::cout << "Error! You should enter a number equal or bigger than 1!" << std::endl;
		return 1;
	}

	int y = 2;
	int f = 2;

	for (size_t i = 2; i <= n; ++i) {
		y = 2 * i;
		f = f * y;
	}

	std::cout << "f = " << f << std::endl;

	return 1;
}
