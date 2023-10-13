#include<iostream>

int main() {   
	char c;
	std::cout << "Enter a character: ";
	std::cin >> c;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}

	if ((int)c >= 48 && (int)c <= 57) {
		std::cout << "This character is a number!" << std::endl;
	}
	else if ((int)c >= 65 && (int)c <= 90 || (int)c >= 97 && (int)c <= 122) {
		std::cout << "This character is a letter!" << std::endl;
	}
	else {
		std::cout << "This character is neither letter nor number!" << std::endl;
	}

	return 1;
}
