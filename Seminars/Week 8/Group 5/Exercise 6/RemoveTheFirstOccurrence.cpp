#include<iostream>

const unsigned int MAX_SIZE = 100;

unsigned int findLen(char*);
void eraseFirst(char*, const char*);

void eraseFirst(char* originalStr, const char* toRemove) {
	size_t originalLen = std::strlen(originalStr);
	size_t toRemoveLen = std::strlen(toRemove);

	char* foundPos = std::strstr(originalStr, toRemove);

	if (foundPos != nullptr) {
		size_t pos = foundPos - originalStr;
		for (size_t i = pos; i < originalLen - toRemoveLen; ++i) {
			originalStr[i] = originalStr[i + toRemoveLen];
		}
		originalStr[originalLen - toRemoveLen] = '\0';
	}
}

int main() {
	char str[MAX_SIZE];
	std::cout << "Enter a string: ";
	std::cin.getline(str, MAX_SIZE);

	char toRemove[MAX_SIZE];
	std::cout << "Enter a string to be removed: ";
	std::cin.getline(toRemove, MAX_SIZE);

	eraseFirst(str, toRemove);

	std::cout << "After erasing first occurrence of \"" << toRemove << "\": " << str << std::endl;

	return 0;
}
