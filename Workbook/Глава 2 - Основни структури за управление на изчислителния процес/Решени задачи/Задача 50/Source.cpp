#include<iostream>

int main() {
	int n;

	do {
		std::cout << "Enter a number: ";
		std::cin >> n;
		if (!std::cin) {
			std::cout << "Error! You have entered worng data!" << std::endl;
			return 1;
		}
	} while (n < 1);

	bool first = true;
	int i = 2;
	while (n > 1) {
		if (n % i == 0) {
			if (!first) {
				std::cout << ".";
			}
			std::cout << i;
			first = false;
			n /= i;
		}
		else {
			i++;
		}
	}

	std::cout << std::endl;

	return 1;
}
