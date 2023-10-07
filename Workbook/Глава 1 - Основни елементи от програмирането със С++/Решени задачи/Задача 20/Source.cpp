#include<iostream>
#include<cmath>

int main() {
	int x = 0, k = 0;

	std::cout << "Enter the value of X: ";
	std::cin >> x;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}

	std::cout << "k (k >= 1) = ";
	std::cin >> k;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}
	if (k <= 0) {
		std::cout << "You should enter a number bigger than 0!" << std::endl;
		return 1;
	}

	std::cout << "The " << k << "th digit of " << x << " is " << x / (int)pow(10.0, k - 1) % 10 << std::endl;

	return 1;
}
