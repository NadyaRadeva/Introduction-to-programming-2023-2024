#include <iostream>
#include <stdexcept>

char** initialiseMatrix(unsigned int rows, unsigned int cols);
void readInput(char** matrix, unsigned int rows, unsigned int cols);
void printOutput(char** matrix, unsigned int rows, unsigned int cols);
void deleteMatrix(char** matrix, unsigned int rows, unsigned int cols);

char* concatenateWordsSnake(char** matrix, unsigned int rows, unsigned int cols);

char** initialiseMatrix(unsigned int rows, unsigned int cols) {
    char** matrix = new char* [rows];
    for (size_t i = 0; i < rows; ++i) {
        matrix[i] = new char[cols];
    }
    return matrix;
}

void readInput(char** matrix, unsigned int rows, unsigned int cols) {
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            std::cin >> matrix[i][j];
        }
    }
}

void printOutput(char** matrix, unsigned int rows, unsigned int cols) {
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void deleteMatrix(char** matrix, unsigned int rows, unsigned int cols) {
    for (size_t i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

char* concatenateWordsSnake(char** matrix, unsigned int rows, unsigned int cols) {
    char* word = new char[rows * cols + 1];
    unsigned int index = 0;

    for (int i = rows - 1; i >= 0; --i) {
        if (i % 2 == 0) {
            for (int j = 0; j < cols; ++j) {
                word[index] = matrix[i][j];
                ++index;
            }
        } else {
            for (int j = cols - 1; j >= 0; --j) {
                word[index] = matrix[i][j];
                ++index;
            }
        }
    }

    word[index] = '\0';
    return word;
}

int main() {
    unsigned int rows;
    std::cout << "Enter the number of your rows: ";
    std::cin >> rows;
    if (!std::cin || rows < 0) {
        throw std::runtime_error("Invalid input!");
        return -1;
    }

    unsigned int cols;
    std::cout << "Enter the number of your columns: ";
    std::cin >> cols;
    if (!std::cin || cols < 0) {
        throw std::runtime_error("Invalid input!");
        return -1;
    }

    char** matrix = initialiseMatrix(rows, cols);
    std::cout << "Enter the characters in your matrix: ";
    readInput(matrix, rows, cols);
    std::cout << std::endl;
    std::cout << "Your matrix: " << std::endl;
    printOutput(matrix, rows, cols);

    char* word = concatenateWordsSnake(matrix, rows, cols);

    std::cout << "Your word is: " << word << std::endl;

    // Free allocated memory
    delete[] word;
    deleteMatrix(matrix, rows, cols);

    return 0;
}
