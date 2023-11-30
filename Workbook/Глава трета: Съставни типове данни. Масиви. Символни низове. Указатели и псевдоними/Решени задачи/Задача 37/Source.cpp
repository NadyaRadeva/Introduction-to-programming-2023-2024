#include<iostream>

const unsigned int MAX_NUMBER_OF_ROWS = 10;
const unsigned int MAX_NUMBER_OF_COLUMNS = 20;
int matrix[MAX_NUMBER_OF_ROWS][MAX_NUMBER_OF_COLUMNS];

void createMatrix(int matrix[][MAX_NUMBER_OF_COLUMNS], unsigned int rows, unsigned int cols);
void printMatrix(int matrix[][MAX_NUMBER_OF_COLUMNS], unsigned int rows, unsigned int cols);

void createMatrix(int matrix[][MAX_NUMBER_OF_COLUMNS],unsigned int rows, unsigned int cols) {
	std::cout << "Enter the elements of the matrix: ";

	for (size_t i = 0; i < rows; ++i) {
		for (size_t j = 0; j < cols; ++j) {
			std::cin >> matrix[i][j];
			if (!std::cin) {
				throw std::runtime_error("Invalid input!");
			}
		}
	}
}

void printMatrix(int matrix[][MAX_NUMBER_OF_COLUMNS], unsigned int rows, unsigned int cols) {
	for (size_t i = 0; i < rows; ++i) {
		for (size_t j = 0; j < cols; ++j) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

int main() {
	std::cout << "Enter the number of rows: ";
	unsigned int rows;
	std::cin >> rows;
	if (!std::cin || rows < 0 || rows > 10) {
		throw std::runtime_error("Invalid input!");
	}

	std::cout << "Enter the number of columns: ";
	unsigned int cols;
	std::cin >> cols;
	if (!std::cin || cols < 0 || cols > 20) {
		throw std::runtime_error("Invalid input!");
	}

	
	createMatrix(matrix, rows, cols);

	std::cout << "Original matrix: " << std::endl;
	printMatrix(matrix, rows, cols);


	std::cout << "Enter a column to be deleted: ";
	unsigned int k;
	std::cin >> k;
	if (!std::cin || k < 1 || k > cols) {
		std::runtime_error("Invalid input!");
	}

	for (size_t j = k + 1; j < cols; ++j) {
		for (size_t i = 0; i < rows; ++i) {
			matrix[i][j - 1] = matrix[i][j];
		}
	}
	cols--;


	std::cout << "The new matrix is: " << std::endl;
	printMatrix(matrix, rows, cols);

	return 0;
}
