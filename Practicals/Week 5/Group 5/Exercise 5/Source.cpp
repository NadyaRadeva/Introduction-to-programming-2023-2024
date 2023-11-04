#include<iostream>

const unsigned int MAX_SIZE = 100;

int abs(int x);

int abs(int x) {
	if (x < 0) {
		return -x;
	}

	return x;
}

int main() {
	unsigned int n;
	std::cout << "Enter the size of the array: ";
	std::cin >> n;
	if (!std::cin) {
		throw std::runtime_error("Invalid data!");
	}
	if (n < 0 || n>100) {
		throw std::runtime_error("Invalid number!");
	}

	int arr[MAX_SIZE];

	std::cout << "Enter elements of the array: ";
	for (size_t i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}

	int oscillation = 0;

	for (size_t i = 0; i < n; ++i) {
		for (size_t j = i + 1; j < n; ++j) {
			if (oscillation < abs(arr[i] - arr[j])) {
				oscillation = abs(arr[i] - arr[j]);
			}
		}
	}

	std::cout << "The oscillation is: " << oscillation << std::endl;

	return 1;
}
