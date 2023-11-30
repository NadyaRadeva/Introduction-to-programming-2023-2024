#include<iostream>

const unsigned int MAX_ROW_AND_COL_SIZE = 10;
int matrix[MAX_ROW_AND_COL_SIZE][MAX_ROW_AND_COL_SIZE];

void createMatrix(int matrix[][MAX_ROW_AND_COL_SIZE], unsigned int size);
void printMatrix(int matrix[][MAX_ROW_AND_COL_SIZE], unsigned int size);
void findFirstPostiveNumInPrincDiag(int matrix[][MAX_ROW_AND_COL_SIZE], unsigned int size);

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

void findFirstPostiveNumInPrincDiag(int matrix[][MAX_ROW_AND_COL_SIZE], unsigned int size) {
	unsigned int row = -1;
		unsigned int column = -1;

	int	i = -1;

	do {
		i++;
	} while (matrix[i][i] < 0 && i < size - 1);

	if (i != -1) {
		std::cout << i << std::endl;
	}
	else {
		std::cout << "There aren't any positive numbers in the principal diagonal." << std::endl;
	}
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

	findFirstPostiveNumInPrincDiag(matrix, size);

	return 1;
}
