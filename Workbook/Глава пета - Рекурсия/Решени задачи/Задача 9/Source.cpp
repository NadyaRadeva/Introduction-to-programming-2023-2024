#include<iostream>

int countDig(int n, int k);

int countDig(int n, int k) {
	if (n < k) {
		return 1;
	}

	return countDig(n / k, k + 1);
}

int main() {
	unsigned int n;
	int k;
	std::cout << "Enter your number: ";
	std::cin >> n;
	if (!std::cin || n < 0) {
		throw std::runtime_error("Error! Invalid input!");
		return 1;
	}

	std::cout << "Enter the base of your numeral system: ";
	std::cin >> k;
	if (!std::cin || k < 1) {
		throw std::runtime_error("Error! Invalid input!");
		return 1;
	}

	std::cout << "The number of the digits of " << n << " in " << k << "-numeral system: " << countDig(n, k) << std::endl;

	return 0;
}
