#include <iostream>

const unsigned int MAX_ROWS = 50;
const unsigned int MAX_COLUMNS = 50;
int matrix[MAX_ROWS][MAX_COLUMNS];

int main() {
    unsigned int rows, columns;

    std::cout << "Matrix 1: " << std::endl;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    if (!std::cin || rows <= 0 || rows > 50) {
        throw std::runtime_error("Invalid input!");
    }

    std::cout << "Enter the number of columns: ";
    std::cin >> columns;
    if (!std::cin || columns <= 0 || columns > 50) {
        throw std::runtime_error("Invalid input!");
    }

    std::cout << "Enter the values of the elements in the matrix: ";
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < columns; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    int transposeMatrix[MAX_ROWS][MAX_COLUMNS];

    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < columns; ++j) {
            transposeMatrix[j][i] = matrix[i][j];
        }

    std::cout << "The transpose of the matrix is: ";
    for (size_t i = 0; i < columns; ++i) {
        for (size_t j = 0; j < rows; ++j) {
            std::cout << transposeMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 1;
}
