#include<iostream>

int reverse(int n, int k, int m);
int reverse(int n, int k);

int reverse(int n, int k, int m) {
	if (n == 0) {
		return m;
	}

	return reverse(n / k, k, m * k + n % k);
}

int reverse(int n, int k) {
	return reverse(n, k, 0);
}

int main() {
	int n;
	int k;
	std::cout << "Enter the values of n and k: ";
	std::cin >> n >> k;
	if (!std::cin || k > 1) {
		throw std::runtime_error("Error! Invalid input!");
		return 1;
	}

	std::cout << reverse(n, k) << std::endl;

	return 0;
}
