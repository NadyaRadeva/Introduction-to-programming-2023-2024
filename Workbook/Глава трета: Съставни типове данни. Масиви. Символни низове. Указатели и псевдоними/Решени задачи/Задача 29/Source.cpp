#include<iostream>

const unsigned int MAX_ROW_AND_COL_SIZE = 10;
int matrix[MAX_ROW_AND_COL_SIZE][MAX_ROW_AND_COL_SIZE];

void createMatrix(int matrix[][MAX_ROW_AND_COL_SIZE], unsigned int size);
void printMatrix(int matrix[][MAX_ROW_AND_COL_SIZE], unsigned int size);
int findSumOfOddNumsBelowPrincDiag(int matrix[][MAX_ROW_AND_COL_SIZE], unsigned int size);

void createMatrix(int matrix[][MAX_ROW_AND_COL_SIZE],unsigned int size) {
	std::cout << "Enter the elements of the matrix: ";

	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			std::cin >> matrix[i][j];
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

int findSumOfOddNumsBelowPrincDiag(int matrix[][MAX_ROW_AND_COL_SIZE], unsigned int size) {
	int sum = 0;

	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			if (i > j) {
				if (matrix[i][j] % 2 != 0) {
					sum += matrix[i][j];
				}
			}
		}
	}

	return sum;
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

	std::cout << "The sum of the odd elements below the principal diagonal is: " << findSumOfOddNumsBelowPrincDiag(matrix, size) << std::endl;

	return 1;
}
