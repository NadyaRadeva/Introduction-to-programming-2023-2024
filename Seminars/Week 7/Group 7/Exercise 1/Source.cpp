#include<iostream>

const unsigned int MAX_SIZE = 100;

void enterElementsInMatrix(int matrix[][MAX_SIZE], unsigned int m, unsigned int n);
void printElementsOfMatrix(int matrix[][MAX_SIZE], unsigned int m, unsigned int n);

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

	return 0;
}
