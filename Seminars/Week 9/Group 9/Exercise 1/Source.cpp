#include<iostream>

const unsigned int MAX_SIZE = 100;

int** initialiseMatrix(unsigned int size);
void readInput(int** matrix, unsigned int size);
void printOutput(int** matrix, unsigned int size);
void deleteMatrix(int** matrix, unsigned int size);

void printElInAndBelowPrinDiag(int** matrix, unsigned int size);
void printElAbovePrinDiag(int** matrix, unsigned int size);
void printElBelowSecDiag(int** matrix, unsigned int size);
void printElInAndAboveSecDiag(int** matrix, unsigned int size);

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

void printElInAndBelowPrinDiag(int** matrix, unsigned int size) {
	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			if (i >= j) {
				std::cout << matrix[i][j] << " ";
			}
		}
		std::cout << std::endl;
	}
}

void printElAbovePrinDiag(int** matrix, unsigned int size) {
	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			if (i < j) {
				std::cout << matrix[i][j] << " ";
			}
		}
		std::cout << std::endl;
	}
}

void printElBelowSecDiag(int** matrix, unsigned int size) {
	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			if (i + j > size - 1) {
				std::cout << matrix[i][j] << " ";
			}
		}
		std::cout << std::endl;
	}
}

void printElInAndAboveSecDiag(int** matrix, unsigned int size) {
	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			if (i + j <= size - 1) {
				std::cout << matrix[i][j] << " ";
			}
		}
		std::cout << std::endl;
	}
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

	std::cout << "Print the elements in and below the principle diagonal: " << std::endl;
	printElInAndBelowPrinDiag(matrix, size);
	std::cout << std::endl;

	std::cout << "Print the elements above the principle diagonal: " << std::endl;
	printElAbovePrinDiag(matrix, size);
	std::cout << std::endl;

	std::cout << "Print the elements below the secondary diagonal: " << std::endl;
	printElBelowSecDiag(matrix, size);
	std::cout << std::endl;

	std::cout << "Print the elements above and in the secondary diagonal: " << std::endl;
	printElInAndAboveSecDiag(matrix, size);
	std::cout << std::endl;

	return 0;
}
