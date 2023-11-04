#include<iostream>

const unsigned int MAX_SIZE = 1024;	

int findMax(int arr[], int n);

int findMax(int arr[], int n) {
	int maxEl = INT_MIN;

	for (size_t i = 0; i < n; ++i) {
		if (maxEl < arr[i]) {
			maxEl = arr[i];
		}
	}
}

int main() {
	int arr[MAX_SIZE];

	unsigned int n;
	std::cout << "Enter the number of checking-ins: ";
	std::cin >> n;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	std::cout << "Enter the elements of the array: ";
	for (size_t i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}

	int counter[MAX_SIZE];
	int c = 0;

	int idFrequencies[100] = {};

	for (size_t i = 0; i < n; ++i) {
		int id;
		std::cin >> id;
		if (id < 1 || id>100) {
			throw std::runtime_error("Invalid id");

			idFrequencies[id - 1] += 1;
		}
	}

	int maxFrequency = findMax(idFrequencies, 100);

	for (size_t i = 0; i < 100; i++) {
		if (idFrequencies[i] == maxFrequency) {
			std::cout << (i + 1) << " ";
		}
	}
	std::cout << std::endl;

	return 1;
}
