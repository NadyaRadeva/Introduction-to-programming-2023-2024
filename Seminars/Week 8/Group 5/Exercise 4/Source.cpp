#include <iostream>

const int MAX_SIZE = 100;

int findLenght(*char);

int findLenght(*char str) {
    int len = 0;

    while (*(len + str) != 0) {
        len++;
    }
    return len;
}

int main() {
    char str1[MAX_SIZE];
    std::cin.getline(str1, MAX_SIZE);
     
    unsigned int histogram[26] = { 0 };

    for (size_t i = 0; i < findLenght(str); ++i) {
        histogram[str[i] - 'a']++;
    }
    for (size_t i = 0; i < 26; ++i) {
        if (histogram[i] > 0) {
            std::cout << (char)('a' + i) << ": " << histogram[i] << std::endl;
        }
    }

    return 0;
}
