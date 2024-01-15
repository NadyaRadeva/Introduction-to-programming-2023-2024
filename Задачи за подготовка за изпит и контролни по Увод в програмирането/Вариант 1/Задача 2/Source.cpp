#include<iostream>
#include<iomanip>
#include<stdexcept>

bool isPrime(int number);

int** initialiseMatrix(unsigned int rows, unsigned int cols);
void readInput(int** matrix, unsigned int rows, unsigned int cols);
void printMatrix(int** matrix, unsigned int rows, unsigned int cols);
void deleteMatrix(int** matrix, unsigned int rows, unsigned int cols);

bool containsPrimeNumber(int** matrix, unsigned int rows, unsigned int cols);

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

void printMatrix(int** matrix, unsigned int rows, unsigned int cols) {
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

bool containsPrimeNumber(int** matrix, unsigned int rows, unsigned int cols) {
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            if (i < j && isPrime(matrix[i][j])) {
                return true;
            }
        }
    }

    return false;
}

void deleteMatrix(int** matrix, unsigned int rows, unsigned int cols) {
    for (size_t i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i <= number / 2; ++i) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    unsigned int d;
    std::cout << "Enter the number of your rows and columns: ";
    std::cin >> d;

    if (!std::cin || d < 0) {
        throw std::runtime_error("Invalid input!");
        return -1;
    }

    int** matrix = initialiseMatrix(d, d);
    std::cout << "Enter the numbers in your matrix: ";
    readInput(matrix, d, d);
    std::cout << std::endl;
    std::cout << "Your matrix: " << std::endl;
    printMatrix(matrix, d, d);

    std::cout << "The elements above the principal diagonal consist of at least one prime number? - " << std::boolalpha << containsPrimeNumber(matrix, d, d) << std::endl;

    deleteMatrix(matrix, d, d);

    return 0;
}
