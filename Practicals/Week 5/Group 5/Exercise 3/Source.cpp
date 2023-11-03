#include<iostream>
#include<iomanip>

const unsigned int MAX_SIZE = 1024;

bool findNumInArr(int n, unsigned int arrSize, int arr[]);

bool findNumInArr(int n, unsigned int arrSize, int arr[]) {
	for (size_t i = 0; i < arrSize; ++i) {
		if (n == arr[i]) {
			return true;
		}
	}

	return false;
}

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
	}

	std::cout << "Enter the element of the array: ";
	for (size_t i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}

	std::cout << "Enter the number you want to find: ";
	int x;
	std::cin >> x;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	std::cout << x << " is in the array? - " << std::boolalpha << findNumInArr(x, n, arr);

	return 1;
}
