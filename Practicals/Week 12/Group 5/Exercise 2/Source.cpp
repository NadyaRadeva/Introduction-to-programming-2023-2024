//not entirely wirtten by me

#include<iostream>

unsigned int** initialiseMatrix(unsigned int rows, unsigned int cols);
void readInput(unsigned int** matrix, unsigned int rows, unsigned int cols);
void printOutput(unsigned int** matrix, unsigned int rows, unsigned int cols);
void deleteMatrix(unsigned int** matrix, unsigned int rows, unsigned int cols);


unsigned int** initialiseMatrix(unsigned int rows, unsigned int cols) {
    unsigned int** matrix = new unsigned int* [rows];
    for (size_t i = 0; i < rows; ++i) {
        matrix[i] = new unsigned int[cols];
    }

    return matrix;
}

void readInput(unsigned int** matrix, unsigned int rows, unsigned int cols) {
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            std::cin >> matrix[i][j];
        }
    }
}

void printOutput(unsigned int** matrix, unsigned int rows, unsigned int cols) {
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void deleteMatrix(unsigned int** matrix, unsigned int rows, unsigned int cols) {
    for (size_t i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

void findPath(int** matrix, int rows, int cols, int i, int j, int* currPath, int currSize, int& resultSize, int prev) {
	// Ако сме излезли извън рамките на матрицата, прекъсваме този клон на рекурсията
	if (i < 0 || j < 0 || i >= rows || j >= cols) return;
	// Ако не е изпълнено условието за нарастващия с 1 път, отново се връщаме
	if (matrix[i][j] - prev != 1) return;
	// Ако вече сме намерили път, не се занимаваме да правим извиквания и да търсим други пътища
	if (resultSize) return;

	// Намираме се в долния десен ъгъл и вече може да запишем размера на намерения път
	if (i == rows - 1 && j == cols - 1) {
		resultSize = currSize;
		return;
	}

	// Отиваме наляво
	currPath[currSize] = 0;
	findPath(matrix, rows, cols, i, j - 1, currPath, currSize + 1, resultSize, matrix[i][j]);

	// Ако в някоя посока намерим път (т.е. resultSize стане различно от 0), директно се връщаме и не гледаме останалите посоки
	if (resultSize) return;

	// Отиваме нагоре
	currPath[currSize] = 1;
	findPath(matrix, rows, cols, i - 1, j, currPath, currSize + 1, resultSize, matrix[i][j]);
	if (resultSize) return;
	// Отиваме надясно
	currPath[currSize] = 2;
	findPath(matrix, rows, cols, i, j + 1, currPath, currSize + 1, resultSize, matrix[i][j]);
	if (resultSize) return;
	// Отиваме надолу
	currPath[currSize] = 3;
	findPath(matrix, rows, cols, i + 1, j, currPath, currSize + 1, resultSize, matrix[i][j]);

	// Забележка: В тази задача всъщност няма нужда да следим дали клетката, през която минаваме, вече е била посетена
	// т.е. няма опасност от безкрайни цикли. Това се дължи на условието за пътя
	// Иска се пътят от височините да е растящ и ако от една клетка сме отишли на друга, то втората клетка е с по-голяма височина
	// Тогава и да искаме, не можем по някое време по-късно да минем през първата клетка и да зациклим, защото тогава няма пътят да е растящ

	// Все пак съм оставил и друга функция - findPathV, която прави същото нещо, но си поддържа
	// допълнително и матрица visited, която указва кой връх е бил вече посетен, за да видите как стават нещата в по-общия случай
}

int* pathWrapper(int** matrix, int rows, int cols, int& resultSize) {
	int* currPath = new int[rows * cols];
	resultSize = 0;

	findPath(matrix, rows, cols, 0, 0, currPath, 0, resultSize, matrix[0][0] - 1);
	if (!resultSize) return nullptr;
	return currPath;
}

// visited[i][j] == 0 - не сме обходили клетката
// visited[i][j] == 1 - обходили сме клетката
void findPathV(int** matrix, int rows, int cols, int i, int j, int* currPath, int currSize, int& resultSize, int prev, bool** visited) {
	if (i < 0 || j < 0 || i >= rows || j >= cols) return;
	// Ако сме обходили клетката, не я гледаме отново, за да не зациклим
	if (visited[i][j]) return;
	if (matrix[i][j] - prev != 1) return;
	if (resultSize) return;

	if (i == rows - 1 && j == cols - 1) {
		resultSize = currSize;
		return;
	}

	visited[i][j] = 1;

	currPath[currSize] = 0;
	findPathV(matrix, rows, cols, i, j - 1, currPath, currSize + 1, resultSize, matrix[i][j], visited);
	if (resultSize) return;
	currPath[currSize] = 1;
	findPathV(matrix, rows, cols, i - 1, j, currPath, currSize + 1, resultSize, matrix[i][j], visited);
	if (resultSize) return;
	currPath[currSize] = 2;
	findPathV(matrix, rows, cols, i, j + 1, currPath, currSize + 1, resultSize, matrix[i][j], visited);
	if (resultSize) return;
	currPath[currSize] = 3;
	findPathV(matrix, rows, cols, i + 1, j, currPath, currSize + 1, resultSize, matrix[i][j], visited);
}

int main() {
	unsigned int** m = new unsigned int* [4];
	m[0] = new unsigned int[] {0, 6, 6, 6};
	m[1] = new unsigned int[] {1, 2, 5, 6};
	m[2] = new unsigned int[] {2, 3, 4, 7};
	m[3] = new unsigned int[] {9, 9, 9, 8};
	int s;
	int* path = pathWrapper(m, 4, 4, s);

	std::cout << s << std::endl;
	for (int i = 0; i < s; i++) {
		std::cout << path[i] << ' ';
	}
	std::cout << std::endl;

	delete[] path;
	for (int i = 0; i < 4; i++) delete[] m[i];
	delete[] m;
}
