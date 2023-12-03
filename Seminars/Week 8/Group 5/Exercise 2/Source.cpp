#include <iostream>

const int MAX_SIZE = 100;

unsigned int findLen(const char* str) {
    int len = 0;

    while (*(len + str) != 0) {
        len++;
    }
    return len;
}

char* copyStr(char* dest, const char* src) {
    size_t length = findLen(src);

    if (dest != nullptr) {
        delete[] dest;
    }

    dest = new char[length + 1];

    for (size_t i = 0; i < length; ++i) {
        dest[i] = src[i];
    }

    dest[length] = '\0';

    return dest;
}

int main() {
    char str[MAX_SIZE];
    std::cin.getline(str, MAX_SIZE);
     
    char* strCopy = nullptr;

    strCopy = copyStr(strCopy, str);

    std::cout << "Original string: " << str << std::endl;
    std::cout << "Copied string: " << strCopy << std::endl;

    delete[] strCopy;

    return 0;
}
