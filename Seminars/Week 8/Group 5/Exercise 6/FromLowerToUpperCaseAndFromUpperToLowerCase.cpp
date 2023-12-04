#include<iostream>

const unsigned int MAX_SIZE = 100;

unsigned int findLen(char*);
char* toUpperStr(char*);
char* toLowerStr(char*);

unsigned int findLen(char* str) {
	unsigned int len = 0;

	while (*(len + str) != 0) {
		len++;
	}

	return len;
}

char* toUpperStr(char* str) {
	unsigned int len = findLen(str) + 1;

	for (size_t i = 0; i < len; ++i) {
		if (str[i] >= 97 && str[i] <= 122) {
			str[i] = str[i] - 32;
		}
	}
	
	return str;
}

char* toLowerStr(char* str) {
	unsigned int len = findLen(str) + 1;

	for (size_t i = 0; i < len; ++i) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;
		}
	}

	return str;
}

int main() {
	char str[MAX_SIZE];
	std::cout << "Enter a string: ";
	std::cin.getline(str, MAX_SIZE);

	std::cout << "The string in upper case: " << toUpperStr(str) << std::endl;
	std::cout << "The string in lower case: " << toLowerStr(str) << std::endl;

	return 0;
}
