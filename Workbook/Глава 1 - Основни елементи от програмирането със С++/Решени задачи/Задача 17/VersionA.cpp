#include<iostream>

int main() {
	double f, m, n, p, q, r, s, t;

	std::cout << "Enter value of M: ";
	std::cin >> m;
	if (!std::cin) {
		std::cout << "You entered WRONG data!" << std::endl;
		return 1;
	}
	if (m < 0) {
		std::cout << "You should enter a POSITIVE number!" << std::endl;
		return 1;
	}

	std::cout << "Enter value of N: ";
	std::cin >> n;
	if (!std::cin) {
		std::cout << "You entered WRONG data!" << std::endl;
		return 1;
	}
	if (n < 0) {
		std::cout << "You should enter a POSITIVE number!" << std::endl;
		return 1;
	}

	std::cout << "Enter value of P: ";
	std::cin >> p;
	if (!std::cin) {
		std::cout << "You entered WRONG data!" << std::endl;
		return 1;
	}
	if (p < 0) {
		std::cout << "You should enter a POSITIVE number!" << std::endl;
		return 1;
	}

	std::cout << "Enter value of Q: ";
	std::cin >> q;
	if (!std::cin) {
		std::cout << "You entered WRONG data!" << std::endl;
		return 1;
	}
	if (q < 0) {
		std::cout << "You should enter a POSITIVE number!" << std::endl;
		return 1;
	}

	std::cout << "Enter value of R: ";
	std::cin >> r;
	if (!std::cin) {
		std::cout << "You entered WRONG data!" << std::endl;
		return 1;
	}
	if (r < 0) {
		std::cout << "You should enter a POSITIVE number!" << std::endl;
		return 1;
	}

	std::cout << "Enter value of S: ";
	std::cin >> s;
	if (!std::cin) {
		std::cout << "You entered WRONG data!" << std::endl;
		return 1;
	}
	if (s < 0) {
		std::cout << "You should enter a POSITIVE number!" << std::endl;
		return 1;
	}

	std::cout << "Enter value of T: ";
	std::cin >> t;
	if (!std::cin) {
		std::cout << "You entered WRONG data!" << std::endl;
		return 1;
	}
	if (t < 0) {
		std::cout << "You should enter a POSITIVE number!" << std::endl;
		return 1;
	}

	f = m + n / (p + q / (r + s / t));
	std::cout << "The value of F is: " << f << std::endl;

	return 1;
}
