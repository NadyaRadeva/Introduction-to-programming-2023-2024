#include<iostream>

bool pow2(int n);

bool pow2(int n) {
	if (n == 1) {
		return true;
	}
	if (n % 2 == 1) {
		return false;
	}

	return pow2(n / 2);
}

int main() {
	int n;
	std::cout << "Enter a number: ";
	std::cin >> n;
	if (!std::cin) {
		throw std::runtime_error("Error! Invalid input!");
		return 1;
	}

	std::cout << pow2(n) << std::endl;

	return 0;
}
