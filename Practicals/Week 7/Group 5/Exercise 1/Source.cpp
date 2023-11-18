#include<iostream>

const unsigned int MAX_ROWS = 50;
const unsigned int MAX_COLUMNS = 50;
int matrix[MAX_ROWS][MAX_COLUMNS];

int main() {
	unsigned int n, m;
	std::cout << "Enter the number of rows: ";
	std::cin >> n;
	if (!std::cin || n < 0 || n > 50) {
		throw std::runtime_error("Invalid input!");
	}
	std::cout << "Enter the number of columns: ";
	std::cin >> m;
	if (!std::cin || m < 0 || m > 50) {
		throw std::runtime_error("Invalid input!");
	}

	std::cout << "Enter elements in the matrix: ";
	for (size_t i = 0; i < n; ++i) {
		for (size_t j = 0; j < m; ++j) {
			std::cin >> matrix[i][j];
		}
	}

	int sum = 0;
	for (size_t i = 0; i < n; ++i) {
		for (size_t j = 0; j < m; ++j) {
			sum += matrix[i][j];
		}
	}

	std::cout << "The sum of all elements is: " << sum << std::endl;

	return 1;
}
