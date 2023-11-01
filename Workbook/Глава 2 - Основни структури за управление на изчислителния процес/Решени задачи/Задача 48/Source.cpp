#include<iostream>

int main() {
	int n;
	do {
		std::cout << "Enter a number: ";
		std::cin >> n;
		if (!std::cin) {
			std::cout << "Error! You have entered wrong data!" << std::endl;
			return 1;
		}
	} while (n < 0);

	int fib;

	if (n == 0) {
		fib = 0;
	}
	else {
		if (n == 1) {
			fib = 1;
		}
		else {
			int a = 0, b = 1;
			for (size_t i = 1; i <= n; ++i) {
				int c = a;
				a = a + b;
				b = c;
			}
			fib = a;
		}
	}

	std::cout << "fib(" << n << ") = " << fib << std::endl;

	return 1;
}
