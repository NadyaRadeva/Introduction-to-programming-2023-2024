#include <iostream>

const unsigned int MAX_ROWS_AND_COLUMNS = 50;
const unsigned int MAX_SIZE_ARRAY = 1024;
int matrix[MAX_ROWS_AND_COLUMNS][MAX_ROWS_AND_COLUMNS];

bool isPrime(int number);

bool isPrime(int number) {
    for (size_t i = 2; i <= number / 2; ++i) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    unsigned int rowsAndCols;

    std::cout << "Matrix: " << std::endl;
    std::cout << "Enter the number of rows and columns: ";
    std::cin >> rowsAndCols;
    if (!std::cin || rowsAndCols <= 0 || rowsAndCols > 50) {
        throw std::runtime_error("Invalid input!");
    }

    std::cout << "Enter the elements of the matrix: ";
    for (size_t i = 0; i < rowsAndCols; ++i) {
        for (size_t j = 0; j < rowsAndCols; ++j) {
            std::cin >> matrix[i][j];
            if (!std::cin) {
                throw std::runtime_error("Invalid input!");
            }
        }
    }

    int arr[MAX_SIZE_ARRAY];
    int counter = 0;

    for (size_t i = 0; i < rowsAndCols; ++i) {
        for (size_t j = 0; j < rowsAndCols; ++j) {
            if (i == j && isPrime(matrix[i][j])) {
                arr[counter] = matrix[i][j];
                counter++;
            }
        }
    }

    std::cout << "All of the prime numbers in the principal diagonal are: ";
    for (size_t i = 0; i < counter; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
