#include<iostream>
#include<iomanip>

bool isPrime(int number);
bool helper(int* array, unsigned int sizeArray, unsigned int index);
bool isPrimeInArray(int* array, unsigned int sizeArray);

bool isPrime(int number) {
	if (number < 2) {
		return false;
	}

	for (size_t i = 2; i <= number / 2; ++i) {
		if (number % i == 0) {
			return false;
		}
	}

	return true;
}

bool helper(int* array, unsigned int sizeArray, unsigned int index) {
	if (index == sizeArray) {
		return false;
	}
	if (isPrime(array[index])) {
		return true;
	}
	return helper(array, sizeArray, index + 1);
}

bool isPrimeInArray(int* array, unsigned int sizeArray) {
	return helper(array, sizeArray, 0);
}

int main() {
	std::cout << "Enter the size of your array: ";
	unsigned int arrSize;
	std::cin >> arrSize;
	if (!std::cin || arrSize < 0) {
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

	std::cout << "There is a prime number in the array? - " << std::boolalpha << isPrimeInArray(array, arrSize) << std::endl;

	return 0;
}
