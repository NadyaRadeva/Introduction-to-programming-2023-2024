#include<iostream>

const unsigned int MAX_NUMBER_OF_ROWS = 2;
const unsigned int MAX_NUMBER_OF_COLUMNS = 20;
int matrix[MAX_NUMBER_OF_ROWS][MAX_NUMBER_OF_COLUMNS];

void createMatrix(int matrix[][MAX_NUMBER_OF_COLUMNS], unsigned int cols);
void printMatrix(int matrix[][MAX_NUMBER_OF_COLUMNS], unsigned int cols);

void createMatrix(int matrix[][MAX_NUMBER_OF_COLUMNS], unsigned int cols) {
	std::cout << "Enter the elements of the matrix: ";

	for (size_t i = 0; i < MAX_NUMBER_OF_ROWS; ++i) {
		for (size_t j = 0; j < cols; ++j) {
			std::cin >> matrix[i][j];
			if (!std::cin) {
				throw std::runtime_error("Invalid input!");
			}
		}
	}
}

void printMatrix(int matrix[][MAX_NUMBER_OF_COLUMNS], unsigned int cols) {
	for (size_t i = 0; i < MAX_NUMBER_OF_ROWS; ++i) {
		for (size_t j = 0; j < cols; ++j) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

int main() {
	std::cout << "Enter the number of columns: ";
	unsigned int cols;
	std::cin >> cols;
	if (!std::cin || cols < 0 || cols > 20) {
		throw std::runtime_error("Invalid input!");
	}

	
	createMatrix(matrix, cols);

	std::cout << "Original matrix: " << std::endl;
	printMatrix(matrix, cols);

	int number = 0;

	for (size_t i = 0; i < cols; ++i) {
		if (matrix[0][i] <= 10 && matrix[1][i] <= 10 && matrix[1][i] - matrix[0][i] <= 3 && matrix[0][i] + matrix[1][i] >= 6) {
			cols++;
			std::cout << "(" << matrix[0][i] << ", " << matrix[1][i] << ")" << std::endl;
		}
	}

	std::cout << "The number of points in A is: " << number << std::endl;

	return 0;
}
