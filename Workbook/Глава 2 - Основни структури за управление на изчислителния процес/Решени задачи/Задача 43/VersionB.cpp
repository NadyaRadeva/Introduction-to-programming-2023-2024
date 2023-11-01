#include<iostream>
#include<cmath>

int main() {
	int n;
	std::cout << "Enter a number: ";
	std::cin >> n;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	double sum = 1;
	double a = 1;

	for (size_t i = 2; i <= n; ++i) {
		if (i % 3 == 0) {
			a = -2;
		}
		else {
			a = 1;
		}

		sum = sum + a / i;
	}

	std::cout << "The sum of the numbers is: " << sum << std::endl;
	std::cout << log(3) << std::endl;

	return 1;
}
