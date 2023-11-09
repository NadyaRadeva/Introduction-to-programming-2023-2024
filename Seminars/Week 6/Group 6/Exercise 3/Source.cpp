#include <iostream>

const unsigned int MAX_SIZE = 1024;

void mergeArrays(int arr1[], int arr2[], int arr1Size, int arr2Size);
void sortArray(int arr[], int arrSize);

void sortArray(int arr[], int arrSize) {
	int minIndex, min;

	for (size_t i = 0; i < arrSize - 1; ++i) {
		minIndex = i;
		min = arr[minIndex];
		for (size_t j = i + 1; j < arrSize; ++j) {
			if (arr[j] < min) {
				minIndex = j;
				min = arr[minIndex];
			}
		}
		arr[minIndex] = arr[i];
		arr[i] = min;
	}

	std::cout << "The new sorted array is: ";
	for (size_t i = 0; i < arrSize; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void mergeArrays(int arr1[], int arr2[], int arr1Size, int arr2Size) {
	int newArr[MAX_SIZE];

	for (size_t i = 0; i < arr1Size; ++i) {
		newArr[i] = arr1[i];
	}
	for (size_t i = 0; i < arr2Size; ++i) {
		newArr[i + arr1Size] = arr2[i];
	}

	std::cout << "The new array is: ";
	for (size_t i = 0; i < arr1Size + arr2Size; ++i) {
		std::cout << newArr[i] << " ";
	}

	std::cout << std::endl;

	sortArray(newArr, arr1Size + arr2Size);
}



int main() {
	int arr1[MAX_SIZE], arr2[MAX_SIZE];
	unsigned int arr1Size;
	unsigned int arr2Size;

	std::cout << "Enter the size of the first array: ";
	std::cin >> arr1Size;
	if (!std::cin) {
		throw std::runtime_error("Invalid type!");
	}
	if (arr1Size < 0) {
		throw std::runtime_error("Invalid number!");
	}

	std::cout << "Enter elements of array 1: ";
	for (size_t i = 0; i < arr1Size; ++i) {
		std::cin >> arr1[i];
	}
	sortArray(arr1, arr1Size);

	std::cout << "Enter the size of the second array: ";
	std::cin >> arr2Size;
	if (!std::cin) {
		throw std::runtime_error("Invalid type!");
	}
	if (arr2Size < 0) {
		throw std::runtime_error("Invalid number!");
	}

	std::cout << "Enter elements of array 2: ";
	for (size_t i = 0; i < arr2Size; ++i) {
		std::cin >> arr2[i];
	}
	sortArray(arr2, arr2Size);

	mergeArrays(arr1, arr2, arr1Size, arr2Size);

	return 1;
}
