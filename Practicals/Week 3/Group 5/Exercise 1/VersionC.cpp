#include<iostream>

int main() {
	int n;
	std::cout << "Enter a number: ";
	std::cin >> n;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	int count = 0;

	for (size_t i = 1; i <= n; ++i) {
		if (i % 7 == 0 && i % 3 != 0 && i % 8 != 0) {
			count++;
		}
	}

	std::cout << "The numbers are: " << count << std::endl;

	return 1;
}
