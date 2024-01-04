#include<iostream>
#include<cstring>
#include<iomanip>

bool helper(char* str, unsigned int left, unsigned int right);
bool isStrPalindrome(char* str, unsigned int len);

bool helper(char* str, unsigned int left, unsigned int right) {
    if (left >= right) {
        return true;
    }
    if (str[left] != str[right]) {
        return false;
    }

    return helper(str, left + 1, right - 1);
}

bool isStrPalindrome(char* str, unsigned int len) {
    return helper(str, 0, len - 1);
}

int main() {
    std::cout << "Enter the length of your string: ";
    unsigned int len;
    std::cin >> len;
    if (!std::cin || len <= 0) {
        throw std::runtime_error("Invalid input!");
        return -1;
    }

    char* str = new char[len + 1];

    std::cin.ignore();

    std::cout << "Enter your string: ";
    std::cin.getline(str, len + 1);

    std::cout << str << " is palindrome? - " << std::boolalpha << isStrPalindrome(str, len) << std::endl;

    delete[] str;

    return 0;
}
