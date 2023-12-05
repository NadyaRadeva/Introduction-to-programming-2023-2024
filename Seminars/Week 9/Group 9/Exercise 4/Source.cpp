#include<iostream>

int** initialiseMatrix(unsigned int size);
void readInput(int** matrix, unsigned int size);
void printOutput(int** matrix, unsigned int size);
void deleteMatrix(int** matrix, unsigned int size);

int maxRow(int** matrix, unsigned int size);
int maxCol(int** matrix, unsigned int size);

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

int maxRow(int** matrix, unsigned int size) {
	int max = INT_MIN, sum, maxRow;

	for (size_t i = 0; i < size; ++i) {
		sum = 0;
		for (size_t i = 0; i < size; ++j) {
			sum += matrix[i][j];
		}
		if (sum > max) {
			max = sum;
			maxRow = i;
		}
	}

	return maxRow;
}

int maxCol(int** matrix, unsigned int size) {
	int max = INT_MIN, maxCol, sum;

	for (size_t j = 0; j < size; ++j) {
		sum = 0;
		for (size_t i = 0; i < size; ++j) {
			sum += matrix[i][j];
			if (sum > max) {
				max = sum;
				maxCol = i;
			}
		}
	}

	return maxCol;
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

	std::cout << "The row with max sum is: " << maxRow(matrix, size) << std::endl;
	std::cout << "The column with max sum is: " << maxCol(matrix, size) << std::endl;

	deleteMatrix(matrix, size);

	return 0;
}
