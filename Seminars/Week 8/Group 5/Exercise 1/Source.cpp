#include<iostream>

const int MAX_SIZE = 100;

unsigned int strlen(char str[]);

unsigned int strlen(char str[]) {
	unsigned int br = 0;

	while (*str != '\0') {  // Use dereference operator (*) to access the character at the current position
		br++;
		str++;
	}

	return br;
}

int main() {
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	std::cout << "The number of letters in " << str << " is " << strlen(str) << ".";

	return 0;
}
