#include<iostream>


int** initialiseMatrix(unsigned int rows, unsigned int cols);
void readInput(int** matrix, unsigned int rows, unsigned int cols);
void printOutput(int** matrix, unsigned int rows, unsigned int cols);
void deleteMatrix(int** matrix, unsigned int rows, unsigned int cols);

int findRegionS(int** matrix, unsigned int rows, unsigned int cols, int x, int y, int target, bool** visited);
bool hasRegionWithS(int** matrix, int rows, int cols, int S);

int** initialiseMatrix(unsigned int rows, unsigned int cols) {
	int** matrix = new int* [rows];

	for (size_t i = 0; i < rows; ++i) {
		matrix[i] = new int[cols];
	}

	return matrix;
}

void readInput(int** matrix, unsigned int rows, unsigned int cols) {
	for (size_t i = 0; i < rows; ++i) {
		for (size_t j = 0; j < cols; ++j) {
			std::cin >> matrix[i][j];
		}
	}
}

void printOutput(int** matrix, unsigned int rows, unsigned int cols) {
	for (size_t i = 0; i < rows; ++i) {
		for (size_t j = 0; j < cols; ++j) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void deleteMatrix(int** matrix, unsigned int rows, unsigned int cols) {
	for (size_t i = 0; i < rows; ++i) {
		delete[] matrix[i];
	}

	delete[] matrix;
}

int findRegionS(int** matrix, unsigned int rows, unsigned int cols, int x, int y, int target, bool** visited) {
	int s = 1;

	if (x >= 0 && x < rows && y >= 0 && y < cols && !visited[x][y] && matrix[x][y] == target) {
		visited[x][y] = true;
		s *= matrix[x][y];

		for (int i = x - 1; i <= x + 1; ++i) {
			for (int j = y - 1; j <= y + 1; ++j) {
				s *= findRegionS(matrix, i, j, rows, cols, target, visited);
			}
		}
	}

	return s;
}

bool hasRegionWithS(int** matrix, int rows, int cols, int S) {
	bool visited[100][100] = { false };

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			int sum = findRegionS(matrix, rows, cols, i, j, matrix[i][j], visited);
			if (sum == S) {
				return true;
			}
		}
	}

	return false;
}

int main() {
	unsigned int rows;
	std::cout << "Enter the number of rows in your matrix: ";
	std::cin >> rows;
	if (!std::cin || rows < 0) {
		throw std::runtime_error("Error! Invalid size of the matrix!");
		return 1;
	}

	unsigned int cols;
	std::cout << "Enter the number of columns in your matrix: ";
	std::cin >> cols;
	if (!std::cin || cols < 0) {
		throw std::runtime_error("Error! Invalid size of the matrix!");
		return 1;
	}

	int** matrix = initialiseMatrix(rows, cols);

	std::cout << "Enter the elements in your array: ";
	readInput(matrix, rows, cols);

	std::cout << std::endl;

	int S;
	std::cout << "Enter the target sum S: ";
	std::cin >> S;

	if (hasRegionWithS(matrix, rows, cols, S)) {
		std::cout << "There is a region with sum " << S << " in the matrix." << std::endl;
	}
	else {
		std::cout << "There is no region with sum " << S << " in the matrix." << std::endl;
	}


	std::cout << std::endl;

	

	return 0;
}
