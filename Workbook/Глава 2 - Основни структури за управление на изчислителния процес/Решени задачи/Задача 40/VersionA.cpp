#include<iostream>

int main() {
	int sum = 0;

	for (size_t i = 2; i <= 100; i += 3) {
		sum = sum + i;
	}

	std::cout << "The sum of the numbers is: " << sum << std::endl;

	return 1;
}
