#include<iostream>
#include<iomanip>

bool helper(int* arr, int length, int ele, int index);
bool member(int* arr, int length, int ele);

bool helper(int* arr, int length, int ele, int index) {
	if (index == length) return false;
	if (arr[index] == ele) return true;
	return helper(arr, length, ele, index + 1);
}

bool member(int* arr, int length, int ele) {
	return helper(arr, length, ele, 0);
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
	if(!std::cin) {
		throw std::runtime_error("Invalid input!");
		return -1;
	}
    }

    int number;
    std::cout << "Enter the number you're looking for: ";
    std::cin >> number;
    if (!std::cin) {
        throw std::runtime_error("Invalid input!");
        return -1;
    }

    std::cout << number << " is in the array? - " << std::boolalpha << member(array, sizeArray, number) << std::endl;

    delete[] array;

    return 0;
}
