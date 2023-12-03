#include<iostream>

int findLenght(*char);

int main() {
	char str[] = { 'H','e','l','l','o','\0' };

	int lenght = FindLenght(len);

	std::cout << lenght;
}

int findLenght(*char str) {
	int len = 0;

	while (*(len + str) != 0) {
		len++;
	}
	return len;
}
