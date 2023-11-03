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
		std::cout << "Error! You should enter a positive number!" << std::endl;
		return 1;
	}

	std::cout << "Enter the elements of the array: ";
	for (size_t i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}

	int minEl = INT_MAX, maxEl = INT_MIN;

	for (size_t i = 0; i < n; ++i) {
		if (arr[i] < minEl) {
			minEl = arr[i];
		}
	}
	std::cout << "The smallest element in the array is: " << minEl << std::endl;

	for (size_t i = 0; i < n; ++i) {
		if (arr[i] > maxEl) {
			maxEl = arr[i];
		}
	}
	std::cout << "The largest element in the array is: " << maxEl << std::endl;

	int sum = 0, newSum = 0;
	double average = 0;

	for (size_t i = 0; i < n; ++i) {
		sum += arr[i];
	}

	newSum = sum - (minEl + maxEl);
	average = (double)newSum / (n - 2);

	std::cout << "The average of the element in the array (except min and max) is: " << average << std::endl;

	return 1;
}
