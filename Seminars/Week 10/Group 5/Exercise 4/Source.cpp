#include <iostream>
#include<cstring>

void reverse(char* str);

void reverse(char* str) {
    if (!*str) {
        return;
    }

    reverse(str + 1);
    std::cout << *str;
}

int main() {
    unsigned int size;
    std::cout << "Enter the size of the string: ";
    std::cin >> size;
    if (!std::cin) {
        throw std::runtime_error("Invalid input!");
        return -1;
    }

    char* str = new char[size];

    std::cout << "Enter your string: ";
    std::cin.getline(str, size);

    std::cout << "Your string turned backward is: ";
    reverse(str);

    delete[] str;

    return 0;
}
