#include<iostream>

void swap(unsigned int m, unsigned int n) {
	unsigned int c = m;
	m = n;
	n = c;

	std::cout << m << " " << n << std::endl;
}

int main() {
	unsigned int m, n;

	std::cout << "Enter two numbers: ";
	std::cin >> m >> n;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}
	if (m < 0 || n < 0) {
		std::cout << "Error! You should enter positive numbers!" << std::endl;
		return 1;
	}

	swap(m, n);

	return 1;
}
