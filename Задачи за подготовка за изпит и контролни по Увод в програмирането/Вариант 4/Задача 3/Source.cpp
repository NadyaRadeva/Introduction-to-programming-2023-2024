#include<iostream>
#include<iomanip>

int** initialiseMatrix(unsigned int size);
void readInput(int** matrix, unsigned int size);
void printOutput(int** matrix, unsigned int size);
void deleteMatrix(int** matrix, unsigned int size);

bool isMatrixSymmetrical(int** matrix, unsigned int size);

int** initialiseMatrix(unsigned int size) {
	int** matrix = new int*[size];

	for (size_t i = 0; i < size; ++i) {
		matrix[i] = new int[size];
	}

	return matrix;
}

void readInput(int** matrix, unsigned int size) {
	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			std::cin >> matrix[i][j];
		}
	}
}

void printOutput(int** matrix, unsigned int size) {
	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void deleteMatrix(int** matrix, unsigned int size) {
	for (size_t i = 0; i < size; ++i) {
		delete[] matrix[i];
	}

	delete[] matrix;
}

bool isMatrixSymmetrical(int** matrix, unsigned int size) {
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			if (matrix[i][j] != matrix[size - j - 1][size - i - 1]) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	unsigned int size;
	std::cout << "Enter the size of the array: ";
	std::cin >> size;
	if (!std::cin || size < 1) {
		throw std::runtime_error("Error! You have entered invalid size!");
		return 1;
	}

	int** matrix = initialiseMatrix(size);

	std::cout << "Enter the elements in your matrix: ";
	readInput(matrix, size);

	std::cout << std::endl;

	std::cout << "Your matrix: " << std::endl;
	printOutput(matrix, size);

	std::cout << std::endl;

	std::cout << "The matrix is symmetrical? - " << std::boolalpha << isMatrixSymmetrical(matrix, size) << std::endl;

	return 0;
}
