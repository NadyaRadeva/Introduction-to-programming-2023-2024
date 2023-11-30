#include<iostream>

const unsigned int MAX_ROW_AND_COL_SIZE = 10;
int matrix[MAX_ROW_AND_COL_SIZE][MAX_ROW_AND_COL_SIZE];

bool isPrime(int number);
bool containsFive(int number);
bool isSymmetricalNumber(int number);

bool isPrime(int number) {
	for (size_t i = 2; i < number / 2; ++i) {
		if (number % i == 0) {
			return false;
		}
	}

	return true;
}

bool containsFive(int number) {
	while (number != 0) {
		if (number % 10 == 5) {
			return true;
		}
		number /= 10;
	}

	return false;
}

bool isSymmetricalNumber(int number) {
	if (number >= 0 && number <= 9) {
		return true;
	}
	else {
		int digitCounter = 0;
		int arrDigits[MAX_ROW_AND_COL_SIZE];

		while (number != 0) {
			arrDigits[digitCounter] = number % 10;
			number /= 10;
			digitCounter++;
		}

		for (int i = 0; i < digitCounter / 2; ++i) {
			if (arrDigits[i] != arrDigits[digitCounter - i - 1]) {
				return false;
			}
		}
	}

	return true;
}

void createMatrix(int matrix[][MAX_ROW_AND_COL_SIZE], unsigned int size);
void printMatrix(int matrix[][MAX_ROW_AND_COL_SIZE], unsigned int size);
int findSumOfPrimeElInNBelowPrincDiag(int matrix[][MAX_ROW_AND_COL_SIZE], unsigned int size);
int findProductOfElInNAbovePrincDiagContainingFive(int matrix[][MAX_ROW_AND_COL_SIZE], unsigned int size);
int findNumberOfSymmetricalNumsBelowNInSecDiag(int matrix[][MAX_ROW_AND_COL_SIZE], unsigned int size);

void createMatrix(int matrix[][MAX_ROW_AND_COL_SIZE],unsigned int size) {
	std::cout << "Enter the elements of the matrix: ";

	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			std::cin >> matrix[i][j];
			if (!std::cin) {
				throw std::runtime_error("Invalid input!");
			}
		}
	}
}

void printMatrix(int matrix[][MAX_ROW_AND_COL_SIZE], unsigned int size) {
	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

int findSumOfPrimeElInNBelowPrincDiag(int matrix[][MAX_ROW_AND_COL_SIZE], unsigned int size) {
	int sum = 0;

	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			if (i >= j && isPrime(matrix[i][j])) {
				sum += matrix[i][j];
			}
		}
	}

	return sum;
}

int findProductOfElInNAbovePrincDiagContainingFive(int matrix[][MAX_ROW_AND_COL_SIZE], unsigned int size) {
	int pr = 1;

	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			if (i <= j && containsFive(matrix[i][j])) {
				pr *= matrix[i][j];
			}
		}
	}

	return pr;
}

int findNumberOfSymmetricalNumsBelowNInSecDiag(int matrix[][MAX_ROW_AND_COL_SIZE], unsigned int size) {
	int counter = 0;

	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			if (i + j >= size - 1 && isSymmetricalNumber(matrix[i][j])) {
				counter++;
			}
		}
	}

	return counter;
}


int main() {
	std::cout << "Enter the number of rows and columns of the matrix: ";
	unsigned int size;
	std::cin >> size;
	if (!std::cin || size < 0 || size > 10) {
		throw std::runtime_error("Invalid input!");
	}
	
	createMatrix(matrix, size);
	printMatrix(matrix, size);

	std::cout << "The sum of the elements in and below the principle diagonal is " << findSumOfPrimeElInNBelowPrincDiag(matrix, size) << "." << std::endl;
	std::cout << "The product of the elements in and above the principle diagonal containing 5 is " << findProductOfElInNAbovePrincDiagContainingFive(matrix, size) << "." << std::endl;
	
	if (findNumberOfSymmetricalNumsBelowNInSecDiag(matrix,size) == 0) {
		std::cout << "There aren't any symmetrical numbers in and below the secondary diagonal." << std::endl;
	}
	else {
		std::cout << "The count of symmetrical numbers in and below the secondary diagonal is " << findNumberOfSymmetricalNumsBelowNInSecDiag(matrix, size) << "." << std::endl;
	}

	return 0;
}
