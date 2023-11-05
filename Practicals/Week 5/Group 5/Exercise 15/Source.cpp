#include <iostream>

const int MAX_SIZE = 1024;

void readArray(int* arr, unsigned arrSize) {
  for (int i = 0; i < arr_size; i++) {
    std::cout << "Enter element at arr[" << i << "]: " << std::endl;
    std::cin >> arr[i];
  }
}

unsigned readArraySize(const unsigned maxSize) {
  unsigned arrSize;

  do {
    std::cout << "Enter array size: " << std::endl;

    std::cin >> arr_size;
  } while (arrSize > maxSize);

  return arrSize;
}

int longestArithmeticProgressionLen(int* arr, unsigned arrSize, int d) {
  int longestLen = 1;
  for (int i = 0; i < arrSize - 1; i++) {
    int currentLen = 1;
    int j = i + 1;
    while (j < arrSize && arr[j] == arr[j - 1] + d) {
      currentLen++;
      j++;
    }

    if (currentLen > longestLen) {
      longestLen = currentLen;
    }
  }

  return longestLen;
}

int main() {
  int arr[MAX_SIZE];
  int d;

  unsigned arrSize = readArraySize(MAX_SIZE);

  readArray(arr, arrSize);

  std::cout << "ENTER d: " << std::endl;
  std::cin >> d;

  int longestLength = longestArithmeticProgressionLen(arr, arrSize, d);

  std::cout << "The longest arithmetic progression has length: " << longestLength << std::endl;
  
  return 1;
}
