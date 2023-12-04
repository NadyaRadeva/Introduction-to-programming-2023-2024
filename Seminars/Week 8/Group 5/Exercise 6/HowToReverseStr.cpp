#include<iostream>

const unsigned int MAX_SIZE = 100;

unsigned int findLen(char*);
char* reverseStr(char*);

unsigned int findLen(char* str) {
	unsigned int len = 0;

	while (*(len + str) != 0) {
		len++;
	}

	return len;
}

char* reverseStr(char* str) {
	size_t len = findLen(str);

	char* reversedStr = new char[len + 1];

	for (size_t i = 0; i < len; ++i) {
		reversedStr[i] = str[len - i - 1];
	}
	reversedStr[len] = '\0';

	return reversedStr;
}


int main() {
	char str[MAX_SIZE];
	std::cout << "Enter a string: ";
	std::cin.getline(str, MAX_SIZE);

	char* reversed = reverseStr(str);

	std::cout << "The reversed version of the string is: " << reversed << std::endl;

	delete reversed;

	return 0;
}
