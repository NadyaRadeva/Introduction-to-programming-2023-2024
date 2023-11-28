#include<iostream>
#include<iomanip>

const unsigned int MAX_SIZE = 100;

void enterElementsInMatrix(int matrix[][MAX_SIZE], unsigned int m, unsigned int n);
void printElementsOfMatrix(int matrix[][MAX_SIZE], unsigned int m, unsigned int n);
void findMaxSumRowAndMaxProductColumn(int matrix[][MAX_SIZE], int m, int n, int& maxSumRowIndex, int& maxProductColIndex);

void enterElementsInMatrix(int matrix[][MAX_SIZE], unsigned int m, unsigned int n) {
	for (size_t i = 0; i < m; ++i) {
		for (size_t j = 0; j < n; ++j) {
			std::cin >> matrix[i][j];
		}
	}
}

void printElementsOfMatrix(int matrix[][MAX_SIZE], unsigned int m, unsigned int n) {
	for (size_t i = 0; i < m; ++i) {
		for (size_t j = 0; j < n; ++j) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
}

void findMaxSumRowAndMaxProductColumn(int matrix[][MAX_SIZE], int m, int n, int& maxSumRowIndex, int& maxProductColIndex) {
	int maxSum = INT_MIN, maxProduct = INT_MIN;

	for (int i = 0; i < m; i++) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			sum += matrix[i][j];
		}
		if (sum > maxSum) {
			maxSum = sum;
			maxSumRowIndex = i;
		}
	}

	for (int j = 0; j < n; j++) {
		int product = 1;
		for (int i = 0; i < m; i++) {
			product *= matrix[i][j];
		}
		if (product > maxProduct) {
			maxProduct = product;
			maxProductColIndex = j;
		}
	}
}

int main() {
	unsigned int m;
	std::cout << "Enter the number of rows: ";
	std::cin >> m;
	if (!std::cin || m < 0 || m > 1024) {
		throw std::runtime_error("Invalid input!");
	}

	unsigned int n;
	std::cout << "Enter the number of columns: ";
	std::cin >> n;
	if (!std::cin || n < 0 || n > 1024) {
		throw std::runtime_error("Invalid input!");
	}

	int matrix[MAX_SIZE][MAX_SIZE];

	std::cout << "Enter " << m * n << " elements:" << std::endl;
	enterElementsInMatrix(matrix, m, n);

	std::cout << "Print the elements in the matrix: " << std::endl;
	printElementsOfMatrix(matrix, m, n);

	int maxSumRowIndex, maxProductColIndex;
	findMaxSumRowAndMaxProductColumn(matrix, m, n, maxSumRowIndex, maxProductColIndex);
	std::cout << "Row with Max Sum: " << maxSumRowIndex << std::endl;
	std::cout << "Column with Max Product: " << maxProductColIndex << std::endl;
	std::cout << std::endl;

	return 0;
}
