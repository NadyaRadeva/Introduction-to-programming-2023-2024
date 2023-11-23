#include <iostream>

const unsigned int MAX_ROWS_AND_COLUMNS = 50;
const unsigned int MAX_SIZE_ARRAY = 1024;
int matrix[MAX_ROWS_AND_COLUMNS][MAX_ROWS_AND_COLUMNS];

void swap(int& a, int& b);
void deleteFromColumn(int matrix[][MAX_ROWS_AND_COLUMNS], int row, int col, int size);
void deleteReverseDiag(int matrix[][MAX_ROWS_AND_COLUMNS], int size);

void swap(int& a, int& b) {
	int c = a;
	a = b;
	b = c;
}

void deleteFromColumn(int matrix[][MAX_ROWS_AND_COLUMNS], int row, int col, int size) {
	for (size_t i = 0; i < size - 1; ++i) {
		swap(matrix[i][col], matrix[i][col]);
	}
}

void deleteReverseDiag(int matrix[][MAX_ROWS_AND_COLUMNS], int size) {
	for (size_t i = 0; i < size; ++i) {
		deleteFromColumn(matrix, i, size - 1 - i, size);
	}
}

int main() {
	unsigned int size;
	std::cout << "Enter the size of the matrix: ";
	std::cin >> size;
	if (!std::cin || size < 0 || size > 50) {
		throw std::runtime_error("Invalid input!");
	}

	std::cout << "Enter elements of the array: ";
	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			std::cin >> matrix[i][j];
			if (!std::cin) {
				throw std::runtime_error("Invalid input!");
			}
		}
	}

	deleteReverseDiag(matrix, size);

	std::cout << "Print new matrix: ";

	for (size_t i = 0; i < size; ++i) {
		for (size_t j = 0; j < size; ++j) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << " ";
	}

	return 1;

}
