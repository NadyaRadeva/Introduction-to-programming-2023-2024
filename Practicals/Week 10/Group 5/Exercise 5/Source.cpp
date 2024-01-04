#include<iostream>

int findSum(int* array, unsigned int sizeArr);
int helper(int* array, unsigned int sizeArr, unsigned int index);

int helper(int* array, unsigned int sizeArr, unsigned int index) {
	if (index == sizeArr) {
		return 0;
	}

	return array[index] + helper(array, sizeArr, index + 1);
}

int findSum(int* array, unsigned int sizeArr) {
	return helper(array, sizeArr, 0);
}

int main() {
	std::cout << "Enter the size of your array: ";
	unsigned int arrSize;
	std::cin >> arrSize;
	if(!std::cin || arrSize < 0) {
		throw std::runtime_error("Invalid input!");
		return -1;
	}

	int* array = new int[arrSize];
	std::cout << "Enter the numbers in your array: ";
	for (size_t i = 0; i < arrSize; ++i) {
		std::cin >> array[i];
		if (!std::cin) {
			throw std::runtime_error("Invalid input!");
			return -1;
		}
	}

	std::cout << "The sum of the numbers in your array is: " << findSum(array, arrSize) << std::endl;

	delete[] array;

	return 0;
}
