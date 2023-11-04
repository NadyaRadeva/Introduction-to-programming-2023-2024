#include <iostream>

int main() {
	unsigned n;
	std::cin >> n;

	unsigned mask = 0;
	while (n) {
		mask = mask | (1 << (n % 10));
		n /= 10;
	}
	std::cout << ((mask == (1 << 10) - 1) ? "Has all digits" : "Does not have all digits") << std::endl;

	unsigned n;
	std::cin >> n;

	unsigned mask = 0;
	while (n) {
		if ((mask ^ (1 << (n % 10))) < mask) {
			std::cout << "Not with unique digits" << std::endl;
			return 0;
		}
		mask = mask ^ (1 << (n % 10));
		n /= 10;
	}
	std::cout << "With unique digits" << std::endl;

  return 1;
}
