#include<iostream>

int main() {
	int n;
	std::cout << "Enter a number: ";
	std::cin >> n;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	int sum = 0;

	for (size_t i = 1; i <= n; ++i) {
		if (i % 5 == 2) {
			sum += i;
		}
	}

	std::cout << "Sum: " << sum << std::endl;

	return 1;
}
