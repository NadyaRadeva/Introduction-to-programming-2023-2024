//not entirely done by me

#include<iostream>
#include<iomanip>

int** initialiseMatrix(unsigned int rows, unsigned int cols);
void readInput(int** matrix, unsigned int rows, unsigned int cols);
void printOutput(int** matrix, unsigned int rows, unsigned int cols);
void deleteMatrix(int** matrix, unsigned int rows, unsigned int cols);

int min(int a, int b, int c);

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

int min(int a, int b, int c) {
    if (a <= b && a <= c) {
        return a;
    }
    if (b <= c) {
        return b;
    }
    return c;
}

int helper(int** dungeon, int rows, int cols, int i, int j, int currHp, int health) {
    // Ако сме излезли от матрицата, слагаме максималната стойност за int
    // По-правилно щеше да бъде, ако си бяхме изчислили предварително максималният живот, който може да загубим (т.е. сборът на всички отрицателни клетки)
    // и да ползваме него за невалидна стойност, но и така може
    if (i >= rows || j >= cols) return INT_MAX;
    if (i == rows - 1 && j == cols - 1) return currHp;

    // Идеята е на всеки момент currHp ще ни пази минималният живот, нужен, за да стигнем до текущата клетка
    // Поддържаме си и променливата healthBank, която ни казва колко живот сме натрупали досега от "лечебните" клетки

    // Ако срещнем опасност (т.е. числото е отрицателно)
    if (dungeon[i][j] < 0) {
        // Ако ще загубим живот, повече от натрупания от "лечебни" клетки досега
        if (-dungeon[i][j] > health) {
            // Тук ще си изгубим всичкия натрупан живот
            // и за да не ни убие останалата част, трябва да си увеличим минималния живот, нужен за прекосяването на тази клетка
            currHp += -dungeon[i][j] - health;
            health = 0;
        }
        // Ако опасността е твърде малка, няма да си променяме минималния живот, защото
        // дори и да сме започнали с живот 1, "лечебните" клетки са ни вдигнали живота достатъчно високо,
        // че да не умрем от текущата клетка
        else health += dungeon[i][j];
    }
    // Ако ще получаваме живот, минималният живот, нужен за стигане дотук няма да се промени
    // Трябва само да си обновим живота, който сме натрупали от "лечебните" клетки
    else health += dungeon[i][j];

    return min(helper(dungeon, rows, cols, i + 1, j, currHp, health),
        helper(dungeon, rows, cols, i, j + 1, currHp, health),
        helper(dungeon, rows, cols, i + 1, j + 1, currHp, health));
}

int minSurvive(int** dungeon, int rows, int cols) {
    return helper(dungeon, rows, cols, 0, 0, 1, 0);
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

    std::cout << std::boolalpha << minSurvive(dungeon, rows, cols) << std::endl;

    deleteMatrix(dungeon, rows, cols);

    return 0;
}
