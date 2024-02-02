#include <iostream>
#include <iomanip>

int** initialiseMatrix(unsigned int rowsAndCols);
void readInput(int** matrix, unsigned int rowsAndCols);
void printOutput(int** matrix, unsigned int rowsAndCols);
void deleteMatrix(int** matrix, unsigned int rowsAndCols);

int fibNumbers(int number);
bool isFibonacci(int number);

bool doesMatrixContainFibNums(int** matrix, unsigned int rowsAndCols);

int** initialiseMatrix(unsigned int rowsAndCols) {
    int** matrix = new int*[rowsAndCols];
    for (size_t i = 0; i < rowsAndCols; ++i) {
        matrix[i] = new int[rowsAndCols];
    }
    return matrix;
}

void readInput(int** matrix, unsigned int rowsAndCols) {
    for (size_t i = 0; i < rowsAndCols; ++i) {
        for (size_t j = 0; j < rowsAndCols; ++j) {
            std::cin >> matrix[i][j];
        }
    }
}

void printOutput(int** matrix, unsigned int rowsAndCols) {
    for (size_t i = 0; i < rowsAndCols; ++i) {
        for (size_t j = 0; j < rowsAndCols; ++j) {
            std::cout << std::setw(4) << matrix[i][j];
        }
        std::cout << std::endl;
    }
}

void deleteMatrix(int** matrix, unsigned int rowsAndCols) {
    for (size_t i = 0; i < rowsAndCols; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int fibNumbers(int number) {
    if (number == 1 || number == 2) {
        return 1;
    }
    return fibNumbers(number - 1) + fibNumbers(number - 2);
}

bool isFibonacci(int number) {
    int i = 1;
    int fib = fibNumbers(i);
    while (fib < number) {
        ++i;
        fib = fibNumbers(i);
    }
    return fib == number;
}

bool doesMatrixContainFibNums(int** matrix, unsigned int rowsAndCols) {
    for (size_t i = 0; i < rowsAndCols; ++i) {
        for (size_t j = 0; j < rowsAndCols; ++j) {
            if (i + j < rowsAndCols - 1 && isFibonacci(matrix[i][j])) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    unsigned int size;
    std::cout << "Enter the size of your matrix: ";
    std::cin >> size;
    if (!std::cin || size <= 0) {
        throw std::runtime_error << "Error! You have entered an invalid size!" << std::endl;
        return 1;
    }

    int** matrix = initialiseMatrix(size);
    std::cout << "Enter the elements of your matrix:" << std::endl;
    readInput(matrix, size);

    std::cout << std::endl;
    std::cout << "Your matrix:" << std::endl;
    printOutput(matrix, size);

    std::cout << std::endl;

    std::cout << "The elements above the secondary diagonal of your matrix contain Fibonacci numbers: " << std::boolalpha << doesMatrixContainFibNums(matrix, size) << std::endl;

    deleteMatrix(matrix, size);
  
    return 0;
}
