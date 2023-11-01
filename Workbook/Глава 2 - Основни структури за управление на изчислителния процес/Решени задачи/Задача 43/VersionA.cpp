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
	double k = 1;

	for (size_t i = 2; i <= n; ++i) {
		k = -k;
		sum = sum + k / i;
	}

	std::cout << "The sum of the numbers is: " << sum << std::endl;

	return 1;
}
