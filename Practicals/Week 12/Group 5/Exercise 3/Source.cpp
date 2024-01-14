#include<iostream>
#include<iomanip>

int** initialiseMatrix(unsigned int rows, unsigned int cols);
void readInput(int** matrix, unsigned int rows, unsigned int cols);
void printOutput(int** matrix, unsigned int rows, unsigned int cols);
void deleteMatrix(int** matrix, unsigned int rows, unsigned int cols);

bool helper(int** dungeon, unsigned int rows, unsigned int cols, unsigned int i, unsigned int j, int health);
bool hasReachedGoalAndHasSurvived(int** dungeon, unsigned int rows, unsigned int cols, int startHealth);

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

bool helper(int** dungeon, unsigned int rows, unsigned int cols, unsigned int i, unsigned int j, int health) {
    if (health <= 0 || i >= rows || j >= cols) {
        return false;
    }

    if (i == rows - 1 && j == cols - 1) {
        return true;
    }

    return helper(dungeon, rows, cols, i + 1, j, health + dungeon[i][j]) ||
        helper(dungeon, rows, cols, i, j + 1, health + dungeon[i][j]) ||
        helper(dungeon, rows, cols, i + 1, j + 1, health + dungeon[i][j]);
}

bool hasReachedGoalAndHasSurvived(int** dungeon, unsigned int rows, unsigned int cols, int startHealth) {
    return helper(dungeon, rows, cols, 0, 0, startHealth);
}

int main() {
    unsigned int rows;
    unsigned int cols;

    std::cout << "Enter the number of your rows: ";
    std::cin >> rows;
    if (!std::cin || rows < 0) {
        throw std::runtime_error("Invalid input!");
        return -1;
    }

    std::cout << "Enter the number of your columns: ";
    std::cin >> cols;
    if (!std::cin) {
        throw std::runtime_error("Invalid input!");
        return -1;
    }

    int** dungeon = initialiseMatrix(rows, cols);

    std::cout << "Enter the values in your dungeon: ";
    readInput(dungeon, rows, cols);

    std::cout << std::endl;

    std::cout << "Your dungeon: " << std::endl;
    printOutput(dungeon, rows, cols);

    for (int i = 1; i <= 10; i++) {
        std::cout << std::boolalpha << hasReachedGoalAndHasSurvived(dungeon, rows, cols, i) << std::endl;
    }

    deleteMatrix(dungeon, rows, cols);

    return 0;
}
