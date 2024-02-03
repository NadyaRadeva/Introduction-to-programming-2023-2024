#include<iostream>

void findLongestSequenceOfTheSameNum(int* arr, unsigned int arrSize);

void findLongestSequenceOfTheSameNum(int* arr, unsigned int arrSize) {
	int maxLength = 0;
	int beginnig = 0;
	int currentLength = 1;

	for (size_t i = 1; i < arrSize; ++i) {
		if (arr[i] == arr[i - 1]) {
			currentLength++;
			if (currentLength > maxLength) {
				maxLength = currentLength;
				beginnig = arr[i];
			}
		}
		else {
			currentLength = 1;
		}
	}

	std::cout << "The beginning of the longest sequence of repeating is " << beginnig << " and the length of it is " << maxLength << "." << std::endl;
}

int main() {
	unsigned int size;
	std::cout << "The size of your is: ";
	std::cin >> size;
	if (!std::cin || size < 0) {
		throw std::runtime_error("Error! Invalid size of the array!");
		return 1;
	}

	int* arr = new int[size];

	std::cout << "Enter elements in your array: ";
	for (size_t i = 0; i < size; ++i) {
		std::cin >> arr[i];
	}

	findLongestSequenceOfTheSameNum(arr, size);

	delete[] arr;

	return 0;
}
