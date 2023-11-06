#include<iostream>

const unsigned int MAX_SIZE = 1024;

bool isEven(int number);
bool isNumDifferent(int number);
int findSumOfDiffNums(int start, int end);

bool isEven(int number) {
	if (number % 2 == 0) {
		return true;
	}

	return false;
}

bool isNumDifferent(int number) {
	int digit = 0;
	int counter = 0;
	int digitsArr[MAX_SIZE];

	while (number != 0) {
		digit = number % 10;
		number /= 10;
		digitsArr[counter] = digit;
		digit = 0;
		counter++;
	}

	for (size_t i = 0; i < counter - 1; ++i) {
		if (isEven(digitsArr[i]) == isEven(digitsArr[i + 1])) {
			return false;
		}
	}

	return true;
}

int findSumOfDiffNums(int start, int end) {
	int sum = 0;

	for (size_t i = start; i <= end; i++) {
		if (isNumDifferent(i)) {
			sum += i;
		}
	}

	return sum;
}


int main() {
	int a, b;

	std::cout << "Set an interval: " << std::endl;

	std::cout << "Enter beginning: ";
	std::cin >> a;
	if (!std::cin) {
		throw std::runtime_error("Invalid data!");
	}

	std::cout << "Enter end: ";
	std::cin >> b;
	if (!std::cin) {
		throw std::runtime_error("Invalid data!");
	}

	if (a > b) {
		int c = b;
		b = a;
		a = c;
	}
	else if (a == b) {
		throw std::runtime_error("Invalid input!");
	}

	std::cout << "Sum of different numbers: " << findSumOfDiffNums(a, b) << std::endl;

	return 1;
}
