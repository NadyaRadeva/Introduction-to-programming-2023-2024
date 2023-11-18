#include <iostream>

const unsigned int MAX_ROWS = 50;
const unsigned int MAX_COLUMNS = 50;
int matrix1[MAX_ROWS][MAX_COLUMNS];
int matrix2[MAX_ROWS][MAX_COLUMNS];

int main() {
    unsigned int rows1, columns1, rows2, columns2;

    std::cout << "Matrix 1: " << std::endl;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows1;
    if (!std::cin || rows1 <= 0 || rows1 > 50) {
        throw std::runtime_error("Invalid input!");
    }

    std::cout << "Enter the number of columns: ";
    std::cin >> columns1;
    if (!std::cin || columns1 <= 0 || columns1 > 50) {
        throw std::runtime_error("Invalid input!");
    }

    std::cout << "Enter the elements of the matrix: ";
    for (size_t i = 0; i < rows1; ++i) {
        for (size_t j = 0; j < columns1; ++j) {
            std::cin >> matrix1[i][j];
        }
    }

    std::cout << std::endl;

    std::cout << "Matrix 2: " << std::endl;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows2;
    if (!std::cin || rows2 <= 0 || rows2 > 50) {
        throw std::runtime_error("Invalid input!");
    }

    std::cout << "Enter the number of columns: ";
    std::cin >> columns2;
    if (!std::cin || columns2 <= 0 || columns2 > 50) {
        throw std::runtime_error("Invalid input!");
    }

    std::cout << "Enter the elements of the matrix: ";
    for (size_t i = 0; i < rows2; ++i) {
        for (size_t j = 0; j < columns2; ++j) {
            std::cin >> matrix2[i][j];
        }
    }

    if (rows1 == rows2 && columns1 == columns2) {
        for (size_t i = 0; i < rows1; ++i) {
            for (size_t j = 0; j < columns1; ++j) {
                matrix1[i][j] = matrix1[i][j] - matrix2[i][j];
            }
        }
    }
    else {
        throw std::runtime_error("The rows and/or columns of matrix 1 and matrix 2 are not equal!");
    }

    std::cout << "Matrix 1 - Matrix 2: " << std::endl;
    for (size_t i = 0; i < rows1; ++i) {
        for (size_t j = 0; j < columns1; ++j) {
            std::cout << matrix1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 1;
}
