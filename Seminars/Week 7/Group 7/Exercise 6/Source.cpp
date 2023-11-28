#include<iostream>

const unsigned int MAX_SIZE = 100;

void enterElementsInMatrix(int matrix[][MAX_SIZE], unsigned int m, unsigned int n);
void printElementsOfMatrix(int matrix[][MAX_SIZE], unsigned int m, unsigned int n);
void spiralTraversal(int matrix[][MAX_SIZE], unsigned int m, unsigned int n);

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

void spiralTraversal(int matrix[][MAX_SIZE], int m, int n) {
	int top = 0;
	int bottom = m - 1;
	int left = 0;
	int right = n - 1;

	while (top <= bottom && left <= right) {
		for (int i = left; i <= right; ++i) {
			std::cout << matrix[top][i] << " ";
		}
		top++;

		for (int i = top; i <= bottom; ++i) {
			std::cout << matrix[i][right] << " ";
		}
		right--;

		if (top <= bottom) {
			for (int i = right; i >= left; --i) {
				std::cout << matrix[bottom][i] << " ";
			}
			bottom--;
		}

		if (left <= right) {
			for (int i = bottom; i >= top; --i) {
				std::cout << matrix[i][left] << " ";
			}
			left++;
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

	std::cout << "Spiral traversal: ";
	spiralTraversal(matrix, m, n);

	std::cout << std::endl;

	return 0;
}
