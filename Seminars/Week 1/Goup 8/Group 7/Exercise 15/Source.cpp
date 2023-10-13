#include<iostream>

int main() {
	std::cout << "Enter a letter: ";
	char l;
	std::cin >> l;

	bool isLowercaseLatinLetter = (l >= 'a' && l <= 'z');
	bool isCapitalLatinLetter = (l >= 'A' && l <= 'Z');

	std::cout << "Is a lowercase latin letter: " << isLowercaseLatinLetter << std::endl;
	std::cout << "Is a capital latin letter: " << isCapitalLatinLetter << std::endl;

	return 1;
}
