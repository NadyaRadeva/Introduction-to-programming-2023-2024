#include <iostream>

void printSubsets(char arr[], int size) {
    for (int i = 1; i < (1 << size); ++i) {
        std::cout << "{ ";
        for (int j = 0; j < size; ++j) {
            if (i & (1 << j)) {
                std::cout << arr[j] << " ";
            }
        }
        std::cout << "}" << std::endl;
    }
}

int main() {
    char array[] = {'a', 'b', 'c'};
    int size = sizeof(array) / sizeof(array[0]);

    std::cout << "Непразни подмножества на масива: " << std::endl;
    printSubsets(array, size);

    return 1;
}
