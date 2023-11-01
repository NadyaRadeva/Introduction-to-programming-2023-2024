#include<iostream>

int main() {
	int m, n;

	do {
		std::cout << "Enter the value of M and N: ";
		std::cin >> m >> n;
	} while (m >= n);

	if (n < 100 || m > 999) {
		std::cout << "The interval [" << m << ", " << n << "]" << "does not include numbers with three digits." << std::endl;
	}
	else {
		for (size_t i = 100; i <= 999; ++i) {
			if (i >= m && i <= n && i % (i / 100 * 10 + i % 10) == 0) {
				std::cout << i << " ";
			}
		}
		std::cout << std::endl;
	}

	return 1;
}
