#include <iostream>

const int MAX_SIZE = 1024;

unsigned readArraySize(const unsigned max_size) {
  unsigned arrSize;

  do {
    std::cout << "Enter array size: " << std::endl;

    std::cin >> arrSize;
  } while (arrSize > maxSize);

  return arrSize;
}

void readArray(char* arr, unsigned arrSize) {
  for (int i = 0; i < arrSize; i++) {
    std::cout << "Enter element at arr[" << i << "]: " << std::endl;
    std::cin >> arr[i];
  }
}

char findMissingChar(char *arr, int arrSize) {
  for (int i = 0; i < arrSize - 1; i++) {
    if (arr[i + 1] - arr[i] > 1) {
      return (char) (arr[i] + 1);
    }
  }
}

int main() {
  char arr[MAX_SIZE];
  unsigned arr_size = readArraySize(MAX_SIZE);

  readArray(arr, arrSize);

  std::cout << "The missing char is: " << findMissingChar(arr, arrSize) << std::endl;

  return 1;
}
