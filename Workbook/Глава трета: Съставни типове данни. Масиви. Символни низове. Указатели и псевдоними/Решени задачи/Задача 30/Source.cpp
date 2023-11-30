#include<iostream>

const unsigned int MAX_ROW_AND_COL_SIZE = 10;
int matrix[MAX_ROW_AND_COL_SIZE][MAX_ROW_AND_COL_SIZE];

void createMatrix(int matrix[][MAX_ROW_AND_COL_SIZE], unsigned int size);
void printMatrix(int matrix[][MAX_ROW_AND_COL_SIZE], unsigned int size);
int findProductOfEvenNumsAbovePrincDiag(int matrix[][MAX_ROW_AND_COL_SIZE], unsigned int size);

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

int findProductOfEvenNumsAbovePrincDiag(int matrix[][MAX_ROW_AND_COL_SIZE], unsigned int size) {
	int pr = 1;

	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			if (i < j && matrix[i][j] != 0 && matrix[i][j] % 2 == 0) {
				pr *= matrix[i][j];
			}
		}
	}

	return pr;
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

	std::cout << "The product of the even elements above the principal diagonal is: " << findProductOfEvenNumsAbovePrincDiag(matrix, size) << std::endl;

	return 1;
}
