#include<iostream>
#include<iomanip>

bool helper(int* array, unsigned int arrSize, unsigned int index, int number);
unsigned int digitSum(int number);
bool sat(int* array, unsigned int arrSize, int number);

unsigned int digitSum(int number) {
	unsigned int sum = 0;

	while (number) {
		sum += number % 10;
		number /= 10;
	}

	return sum;
}

bool helper(int* array, unsigned int arrSize, unsigned int index, int number) {
	if (index == 0) {
		return true;
	}
	if (digitSum(array[index]) % number != 0) {
		return false;
	}

	return helper(array, arrSize, index + 1, number);
}

bool sat(int* array, unsigned int arrSize, int number) {
	return helper(array, arrSize, 0, number);
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

	std::cout << std::endl;

	int number;
	std::cout << "Enter your number: ";
	std::cin >> number;
	if (!std::cin) {
		throw std::runtime_error("Invalid input!");
		return -1;
	}

	std::cout << std::boolalpha << sat(array, arrSize, number) << std::endl;

	delete[] array;

	return 0;
}
