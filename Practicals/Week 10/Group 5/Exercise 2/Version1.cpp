#include<iostream>
#include<iomanip>

bool isInArray(int* array, unsigned int sizeArray, int number) {
    if (sizeArray == 0) {
        return false;
    }

    return *array == number || isInArray(array + 1, sizeArray - 1, number);
}

int main() {
    std::cout << "Enter the size of your array: ";
    unsigned int sizeArray;
    std::cin >> sizeArray;
    if (!std::cin || sizeArray <= 0) {
        throw std::runtime_error("Invalid input!");
        return -1;
    }

    int* array = new int[sizeArray];
    std::cout << "Enter the elements in your array: ";
    for (size_t i = 0; i < sizeArray; ++i) {
        std::cin >> array[i];
    }

    int number;
    std::cout << "Enter the number you're looking for: ";
    std::cin >> number;
    if (!std::cin) {
        throw std::runtime_error("Invalid input!");
        return -1;
    }

    std::cout << number << " is in the array? - " << std::boolalpha << isInArray(array, sizeArray, number) << std::endl;

    delete[] array;

    return 0;
}
