#include<iostream>

const unsigned int MAX_SIZE = 1024;

int main() {
	int arr[MAX_SIZE];

	unsigned int n;
	std::cout << "Enter the size of the array: ";
	std::cin >> n;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}
	if (n < 0) {
		std::cout << "You should enter a positive number!" << std::endl;
		return 1;
	}

	std::cout << "Enter the elements in the array: ";
	for (size_t i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}

	int minEl = INT_MAX;

	for (size_t i = 0; i < n; ++i) {
		if (arr[i] < minEl) {
			minEl = arr[i];
		}
	}

	std::cout << "The smallest element in the array is: " << minEl << std::endl;

	return 1;
}
