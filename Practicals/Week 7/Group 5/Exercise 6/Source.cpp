#include <iostream>

const unsigned int MAX_ROWS_AND_COLUMNS = 50;
const unsigned int MAX_SIZE_ARRAY = 1024;
int matrix[MAX_ROWS_AND_COLUMNS][MAX_ROWS_AND_COLUMNS];

int getMaxNumAbovePrincDiag(int matrix[][MAX_ROWS_AND_COLUMNS], int size);

int getMaxNumAbovePrincDiag(int matrix[][MAX_ROWS_AND_COLUMNS], int size) {
	int maxNum = INT_MIN;

	for (size_t i = 0; i < size; ++i) {
		for (size_t j = i + 1; j < size; ++j) {
			if (matrix[i][j] > maxNum) {
				maxNum = matrix[i][j];
			}
		}
	}

	return maxNum;
}

int main() {
	unsigned int size;
	std::cout << "Enter the size of the matrix: ";
	std::cin >> size;
	if (!std::cin || size < 0 || size > 50) {
		throw std::runtime_error("Invalid input!");
	}

	std::cout << "Enter the elements of the matrix: ";
	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			std::cin >> matrix[i][j];
			if (!std::cin) {
				throw std::runtime_error("Invalid input!");
			}
		}
	}

	std::cout << "The max number above the principle diagonal is: " << getMaxNumAbovePrincDiag(matrix, size) << std::endl;

	return 1;
}
