#include<iostream>

const unsigned int MAX_SIZE = 100;

int** initialiseMatrix(unsigned int size);
void readInput(int** matrix, unsigned int size);
void printOutput(int** matrix, unsigned int size);
void deleteMatrix(int** matrix, unsigned int size);

int findSumOfElBelowPrincDiag(int** matrix, unsigned int size);

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

int findSumOfElBelowPrincDiag(int** matrix, unsigned int size) {
	int sum = 0;

	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			if (i > j) {
				sum += matrix[i][j];
			}
		}
	}

	return sum;
}


int main() {
	std::cout << "Enter the size of the matrix: ";
	unsigned int size;
	std::cin >> size;
	if (!std::cin || size < 0 || size > 100) {
		std::runtime_error("Invalid input!");
	}

	int** matrix = initialiseMatrix(size);
	std::cout << "Enter elements: " << std::endl;
	readInput(matrix, size);
	std::cout << "Print matrix: " << std::endl;
	printOutput(matrix, size);
	std::cout << std::endl;

	std::cout << "Print the sum of elements below the principle diagonal: " << findSumOfElBelowPrincDiag(matrix, size) << std::endl;

	return 0;
}
