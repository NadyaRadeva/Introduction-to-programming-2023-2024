#include<iostream>

int main() {
	int sum = 0;

	int i = 2;

	while (i <= 100) {
		sum = sum + i;
		i += 3;
	}

	std::cout << "The sum of the numbers is: " << sum << std::endl;

	return 1;
}
