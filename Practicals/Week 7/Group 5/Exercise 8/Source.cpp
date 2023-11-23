#include <iostream>

const int MAX_SIZE = 50;

void spiralTraversalv2(char matrix[][MAX_SIZE], int size) {
	int indent = 0;

	while (indent <= size - 1 - indent) {
		for (int i = indent; i < size - indent; i++) {
			std::cout << matrix[indent][i] << " ";
		}

		for (int i = indent + 1; i < size - 1 - indent; i++) {
			std::cout << matrix[i][size - 1 - indent] << " ";
		}

		for (int i = size - 1 - indent; i > indent; i--) {
			std::cout << matrix[size - 1 - indent][i] << " ";
		}

		for (int i = size - 1 - indent; i > indent; i--) {
			std::cout << matrix[i][indent] << " ";
		}
		indent++;
	}
	std::cout << std::endl;
}


void spiralTraversal(char matrix[][MAX_SIZE], int size) {
	int indent = 0;

	while (indent <= size - 1 - indent) {
		for (int i = indent; i <= size - 2 - indent; i++) {
			std::cout << matrix[indent][i] << " ";
		}

		for (int i = indent; i <= size - 2 - indent; i++) {
			std::cout << matrix[i][size - 1 - indent] << " ";
		}

		for (int i = size - 1 - indent; i >= 1 + indent; i--) {
			std::cout << matrix[size - 1 - indent][i] << " ";
		}

		for (int i = size - 1 - indent; i >= 1 + indent; i--) {
			std::cout << matrix[i][indent] << " ";
		}

		indent++;
	}

	if (size % 2 != 0) {
		std::cout << matrix[size / 2][size / 2] << std::endl;
	}
}

int main() {
	char matrix[][MAX_SIZE] = {
		{'a', 'b', 'c', 'd', 'e'},
		{'f', 'g', 'h', 'i', 'j'},
		{'k', 'l', 'm', 'n', 'o'},
		{'p', 'q', 'r', 's', 't'},
		{'u', 'v', 'w', 'x', 'y'},
	};
	spiralTraversal(matrix, 4);
}
