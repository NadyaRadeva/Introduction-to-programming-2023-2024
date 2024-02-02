#include<iostream>

int** initialiseMatrix(unsigned int n, unsigned int m);
void readInput(int** matrix, unsigned int n, unsigned int m);
void printOutput(int** matrix, unsigned int n, unsigned int m);
void deleteMatrix(int** matrix, unsigned int n, unsigned int m);

void printNumbersInCols(int** matrix, unsigned int n, unsigned int m);

int** initialiseMatrix(unsigned int n, unsigned int m) {
	int** matrix = new int* [n];
	for (size_t i = 0; i < n; ++i) {
		matrix[i] = new int[m];
	}

	return matrix;
}

void readInput(int** matrix, unsigned int n, unsigned int m) {
	for (size_t i = 0; i < n; ++i) {
		for (size_t j = 0; j < m; ++j) {
			std::cin >> matrix[i][j];
			if (!std::cin || matrix[i][j] < 0 || matrix[i][j]>9) {
				throw std::runtime_error("Error! Invalid input!");
			}
		}
	}
}

void printOutput(int** matrix, unsigned int n, unsigned int m) {
	for (size_t i = 0; i < n; ++i) {
		for (size_t j = 0; j < m; ++j) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void deleteMatrix(int** matrix, unsigned int n, unsigned int m) {
	for (size_t i = 0; i < n; ++i) {
		delete[] matrix[i];
	}

	delete[] matrix;
}

void printNumbersInCols(int** matrix, unsigned int n, unsigned int m) {
	for (size_t i = 0; i < m; ++i) {
		int number = 0;

		for (int j = n - 1; j >= 0; --j) {
			number = number * 10 + matrix[j][i];
		}

		std::cout << number << " ";
	}
}


int main() {
	unsigned int n;
	unsigned int m;

	std::cout << "Enter the number of rows: ";
	std::cin >> n;
	if (!std::cin || n < 1 || n > 10) {
		throw std::runtime_error("Error! You have entered invalid number of rows! ");
		return 1;
	}

	std::cout << "Enter the number of columns: ";
	std::cin >> m;
	if (!std::cin || m < 1 || m > 10) {
		throw std::runtime_error("Error! You have entered invalid number of rows!");
		return 1;
	}

	int** matrix = initialiseMatrix(n, m);

	std::cout << "Enter the elements in your matrix: ";
	readInput(matrix, n, m);

	std::cout << std::endl;

	std::cout << "Your matrix: " << std::endl;
	printOutput(matrix, n, m);

	std::cout << std::endl;

	std::cout << "All of the numbers that meet your requirements are: ";
	printNumbersInCols(matrix, n, m);
	std::cout << std::endl;

	return 0;
}
