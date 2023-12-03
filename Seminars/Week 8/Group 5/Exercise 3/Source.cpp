#include <iostream>

const int MAX_SIZE = 100;

unsigned int findLen(const char* str);


unsigned int findLen(const char* str) {
    int len = 0;

    while (*(len + str) != 0) {
        len++;
    }
    return len;
}

int compareStr(char* str1, char* str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return (*str1 < *str2) ? -1 : 1;
        }
        str1++;
        str2++;
    }

    if (*str1 == '\0' && *str2 == '\0') {
        return 0;
    }
    else {
        return (*str1 == '\0') ? -1 : 1;
    }
}

int main() {
    char str1[MAX_SIZE];
    std::cin.getline(str1, MAX_SIZE);
     
    char str2[MAX_SIZE];
    std::cin.getline(str2, MAX_SIZE);

    std::cout << "Is " << str1 << " equal to " << str2 << "? - " << compareStr(str1, str2) << std::endl;

    return 0;
}
