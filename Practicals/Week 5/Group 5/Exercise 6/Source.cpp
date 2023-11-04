#include<iostream>

const unsigned int MAX_SIZE = 1024;

void swap(int arr[], unsigned int i, unsigned int j);
void rotate(int arr[], unsigned int sizeArr, unsigned int n);

void swap(int arr[], unsigned int i, unsigned int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void rotate(int arr[], unsigned int sizeArr, unsigned int n) {
	for (size_t i = 1; i <= n; ++i) {
		for (size_t j = sizeArr - 1; j >= 1; j--) {
			swap(arr, j, j - 1);
		}
	}

	std::cout << "Rotated array: ";
	for (size_t i = 0; i < sizeArr; ++i) {
		std::cout << arr[i] << " ";
	}
}

int main() {
	unsigned int sizeArr;
	std::cout << "Enter size of the array: ";
	std::cin >> sizeArr;
	if (!std::cin) {
		throw std::runtime_error("Invalid data!");
	}
	if (sizeArr<0 || sizeArr>MAX_SIZE) {
		throw std::runtime_error("Invalid input!");
	}

	int arr[MAX_SIZE];

	std::cout << "Enter elements of the array: ";
	for (size_t i = 0; i < sizeArr; ++i) {
		std::cin >> arr[i];
	}

	unsigned int n;
	std::cout << "Enter number of rotations: ";
	std::cin >> n;
	if (!std::cin) {
		throw std::runtime_error("Invalid input!");
	}

	rotate(arr, sizeArr, n);

	return 1;
}
