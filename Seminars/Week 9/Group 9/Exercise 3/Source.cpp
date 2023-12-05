#include<iostream>

int** initialiseMatrix(unsigned int size);
void readInput(int** matrix, unsigned int size);
void printOutput(int** matrix, unsigned int size);
void deleteMatrix(int** matrix, unsigned int size);

bool containsOne(int number);
int productOfElContainingOneBelowSecDiag(int** matrix, unsigned int size);

bool containsOne(int number) {
	while (number != 0) {
		if (number % 10 == 1) {
			return true;
		}
		number /= 10;
	}

	return false;
}

int** initialiseMatrix(unsigned int size) {
	int** matrix = new int* [size];
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

int productOfElContainingOneBelowSecDiag(int** matrix, unsigned int size) {
	int pr = 1;

	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			if (i + j > size - 1 && containsOne(matrix[i][j])) {
				pr *= matrix[i][j];
			}
		}
	}

	return pr;
}

int main() {
	std::cout << "Enter the size of the matrix: ";
	unsigned int size;
	std::cin >> size;
	if (!std::cin || size < 3 || size > 32) {
		std::runtime_error("Invalid type!");
	}

	int** matrix = initialiseMatrix(size);
	std::cout << "Enter elements in the matrix: " << std::endl;
	readInput(matrix, size);
	std::cout << "Print matrix: " << std::endl;
	printOutput(matrix, size);

	std::cout << "The product of the elements containing one below the secondary diagonal is: " << productOfElContainingOneBelowSecDiag(matrix, size) << std::endl;

	deleteMatrix(matrix, size);

	return 0;
}
