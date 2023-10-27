#include<iostream>

int factoriel(int n) {
	int nf = 1;

	for (size_t i = 1; i <= n; ++i) {
		nf *= i;
	}

	return nf;
}

int calc(int n, int k) {
	int nb;

	nb = factoriel(n) / (factoriel(k) * factoriel(n - k));

	return nb;
}

int main() {
	int n, k;

	std::cout << "Enter two numbers: ";
	std::cin >> n >> k;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}
	if (k > n) {
		std::cout << k << " should be smaller than " << n << std::endl;
		return 1;
	}

	std::cout << "Binomial coefficient: " << calc(n, k) << std::endl;

	return 1;
}
