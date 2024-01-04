#include<iostream>
#include<cstring>

void printStrBackwards(char* str, unsigned int len);

void printStrBackwards(char* str, unsigned int len) {
    if (len == 0) {
        return;
    }

    printStrBackwards(str + 1, len - 1);
    std::cout << *str;
}

int main() {
    std::cout << "Enter a string: ";

    char* str = nullptr;
    unsigned int len;

    std::cin >> len;
    if (!std::cin || len <= 0) {
        throw std::runtime_error("Invalid input!");
        return -1;
    }

    str = new char[len + 1];

    std::cin.getline(str, len + 1);

    std::cout << "The reversed string is: ";
    printStrBackwards(str, len);

    delete[] str;

    return 0;
}
