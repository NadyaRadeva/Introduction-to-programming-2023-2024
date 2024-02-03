#include<iostream>

bool containsKPowerNumbers(int* arr, int n, int k);

bool containsKPowerNumbers(int* arr, int n, int k) {
	for (int i = 1; i <= k; ++i) {
		int power = 1;
		for (int j = 0; j < n; ++j) {
			if (arr[j] == power) {
				if (--k == 0) {
					return true;
				}
			}
			power *= n;
		}
	}
	return false;
}

int main() {
	unsigned int n;
	std::cout << "Enter the size of your interval: ";
	std::cin >> n;
	if (!std::cin || n < 1 || n>100) {
		throw std::runtime_error("Error! Invalid size of your array!");
		return 1;
	}

	int* arr = new int[n];

	std::cout << "Enter the elements in your array: ";
	for (size_t i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}

	int k;
	std::cout << "Enter a number: ";
	std::cin >> k;
	if (!std::cin) {
		throw std::runtime_error("Error! Invalid size of your array!");
		return 1;
	}

	if (containsKPowerNumbers(arr, n, k)) {
		std::cout << "The sequence contains " << k << " numbers that are powers of " << n << "." << std::endl;
	}
	else {
		std::cout << "The sequence does not contain " << k << " numbers that are powers of " << n << "." << std::endl;
	}

	delete[] arr;

	return 0;
}
