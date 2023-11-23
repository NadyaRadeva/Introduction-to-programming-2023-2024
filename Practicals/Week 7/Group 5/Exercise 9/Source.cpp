#include <iostream>

const int MAX_SIZE = 50;

void traverseReverseDiag(int matrix[][MAX_SIZE], int size) {
	int totalSum = 0;

	for (int i = 0; i < size; i++) {
		int currentNumber = 0;
		for (int offset = 0; i - offset >= 0; offset++) {
			currentNumber = 10 * currentNumber + matrix[i - offset][offset];
		}
		totalSum += currentNumber;
		std::cout << currentNumber << " ";
	}

	for (int j = 1; j < size; j++) {
		int currentNumber = 0;
		for (int offset = 0; j + offset < size; offset++) {
			currentNumber = 10 * currentNumber + matrix[size - 1 - offset][j + offset];
		}
		totalSum += currentNumber;
		std::cout << currentNumber << " ";
	}

	std::cout << std::endl << "Sum: " << totalSum << std::endl;
}

int main() {
	int matrix[][MAX_SIZE] = {
		{1, 2, 3, 4},
		{5, 1, 7, 9},
		{3, 8, 0, 0},
		{2, 4, 6, 1}
	};
	traverseReverseDiag(matrix, 3);
}
