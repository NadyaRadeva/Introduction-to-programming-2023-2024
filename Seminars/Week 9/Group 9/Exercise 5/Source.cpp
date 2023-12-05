#include<iostream>

int** initialiseMatrix(unsigned int rows, unsigned int cols);
void readInput(int** matrix, unsigned int rows, unsigned int cols);
void printOutput(int** matrix, unsigned int rows, unsigned int cols);
void deleteMatrix(int** matrix, unsigned int rows, unsigned int cols);

void copyArray(int* arr1, int* arr2, int n);
void removeRow(int** matrix, unsigned int rows, unsigned int cols, unsigned int k);

int** initialiseMatrix(unsigned int rows, unsigned int cols) {
	int** matrix = new int* [rows];
	for (size_t i = 0; i < rows; ++i) {
		matrix[i] = new int[cols];
	}

	return matrix;
}

void readInput(int** matrix, unsigned int rows, unsigned int cols) {
	for (size_t i = 0; i < rows; ++i) {
		for (size_t j = 0; j < cols; ++j) {
			std::cin >> matrix[i][j];
		}
	}
}

void printOutput(int** matrix, unsigned int rows, unsigned int cols) {
	for (size_t i = 0; i < rows; ++i) {
		for (size_t j = 0; j < cols; ++j) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void deleteMatrix(int** matrix, unsigned int rows, unsigned int cols) {
	for (size_t i = 0; i < rows; ++i) {
		delete[] matrix[i];
	}

	delete[] matrix;
}

void copyArray(int* arr1, int* arr2, int n) {
	for (size_t i = 0; i < n; ++i) {
		arr1[i] = arr2[i];
	}
}

void removeRow(int** matrix, unsigned int rows, unsigned int cols, unsigned int k) {
	for (size_t i = k; i < rows - 1; ++i) {
		copyArray(matrix[i], matrix[i + 1], cols);
	}

	delete[] matrix[rows - 1];
}

int main() {
	std::cout << "Enter the number of rows in the matrix: ";
	unsigned int rows;
	std::cin >> rows;
	if (!std::cin || rows <= 1 || rows > 16) {
		std::runtime_error("Invalid type!");
	}

	std::cout << "Enter the number of columns in the matrix: ";
	unsigned int columns;
	std::cin >> columns;
	if (!std::cin || columns <= 1 || columns > 32) {
		std::runtime_error("Invalid type!");
	}

	int** matrix = initialiseMatrix(rows, columns);
	std::cout << "Enter elements in the matrix: " << std::endl;
	readInput(matrix, rows, columns);
	std::cout << "Print matrix: " << std::endl;
	printOutput(matrix, rows, columns);

	std::cout << "Enter a row to be removed: ";
	int k;
	std::cin >> k;
	if (!std::cin || k <= 1 || k > 16) {
		std::runtime_error("Invalid type!");
	}

	removeRow(matrix, rows, columns, k);
	printOutput(matrix, rows, columns);


	deleteMatrix(matrix, rows, columns);

	return 0;
}
