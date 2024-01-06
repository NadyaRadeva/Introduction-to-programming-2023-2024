#include<iostream>

const unsigned int MAX_NUMBER_OF_ROWS = 50;
const unsigned int MAX_NUMBER_OF_COLS = 50;

bool findWord(char matrix[MAX_NUMBER_OF_ROWS][MAX_NUMBER_OF_COLS], char* yourWord, unsigned int n, unsigned int m, unsigned int i, unsigned int j);
bool findWord(char matrix[MAX_NUMBER_OF_ROWS][MAX_NUMBER_OF_COLS], const size_t n, const size_t m, const char* word);

bool findWord(char matrix[MAX_NUMBER_OF_ROWS][MAX_NUMBER_OF_COLS], char* yourWord, unsigned int n, unsigned int m, unsigned int i, unsigned int j) {
	if (matrix[i][j] != *yourWord) {
		return false;
	}

	matrix[i][j] == '#';

	bool found = (yourWord[1] == '\0') || 
		((i > 0) && findWord(matrix, yourWord + 1, n, m, i + 1, j - 1)) ||
		((j > 0) && findWord(matrix, yourWord + 1, n, m, i + 1, j - 1)) ||
		((i < n) && findWord(matrix, yourWord + 1, n, m, i - 1, j + 1)) ||
		((j < m) && findWord(matrix, yourWord, n, m, i + 1, j + 1));

	if (!found) {
		matrix[i][j] = *yourWord;
	}

	return found;
}

bool findWord(char matrix[MAX_NUMBER_OF_ROWS][MAX_NUMBER_OF_COLS], const size_t n, const size_t m, const char* yourWord) {
	for (size_t i = 0; i < n; i++) {
		for (size_t j = 0; j < m; j++) {
			if (findWord(matrix, yourWord, n, m, i, j)) {
				return true;
			}
		}
	}
	return false;
}

bool findAll(char matrix[MAX_NUMBER_OF_ROWS][MAX_NUMBER_OF_COLS], const size_t n, const size_t m, const char** words, const size_t count) {
	for (size_t i = 0; i < count; i++) {
		if (!findWord(matrix, n, m, words[i])) {
			return false;
		}
	}
	return true;
}

int main() {
	int n, m;
	do {
		std::cout << "Enter maxtrix dimensions: ";
		std::cin >> n >> m;
	} while (!((0 < n && n < MAX_SIZE) && (0 < m && m < MAX_SIZE)));

	// Прочитане на матрицата от stdin
	std::cout << "Enter matrix:" << std::endl;
	char matrix[MAX_SIZE][MAX_SIZE];
	for (size_t i = 0; i < n; i++) {
		for (size_t j = 0; j < m; j++) {
			std::cin >> matrix[i][j];
		}
	}

	std::cin.ignore();
	std::string word;
	std::cout << "Enter word(s):" << std::endl;
	while (std::getline(std::cin, word)) {
		std::cout << findWord(matrix, n, m, word.c_str()) << std::endl;
	}

	return 0;
}

int main2() {
	// Четене на размерите на матрицата
	int n, m;
	do {
		std::cout << "Enter maxtrix dimensions: ";
		std::cin >> n >> m;
	} while (!((0 < n && n < MAX_NUMBER_OF_ROWS) && (0 < m && m < MAX_NUMBER_OF_COLS)));

	char matrix[MAX_NUMBER_OF_ROWS][MAX_NUMBER_OF_COLS];
	for (size_t i = 0; i < n; i++) {
		for (size_t j = 0; j < m; j++) {
			std::cin >> matrix[i][j];
		}
	}

	int wordCount;
	do {
		std::cin >> wordCount;
	} while (wordCount <= 0);

	char** words = new char* [wordCount];
	for (size_t i = 0; i < wordCount; i++) {
		int wordLength;
		do {
			std::cin >> wordLength;
		} while (wordLength <= 0);

		words[i] = new char[wordLength + 1];
		std::cin.ignore();
		std::cin.getline(words[i], wordLength + 1);
	}

	std::cout << std::boolalpha;
	for (size_t i = 0; i < wordCount; i++) {
		std::cout << words[i] << ": " << findWord(matrix, n, m, words[i]) << std::endl;
	}

	for (size_t i = 0; i < wordCount; i++) {
		delete[] words[i];
	}
	delete[] words;

	return 0;
}
