#include <iostream>

const int MAX_SIZE = 1024;

void readArray(int* arr, unsigned arrSize) {
  for (int i = 0; i < arrSize; i++) {
    std::cout << "Enter element at arr[" << i << "]: " << std::endl;
    std::cin >> arr[i];
  }
}

unsigned readArraySize(const unsigned maxSize) {
  unsigned arrSize;

  do {
    std::cout << "Enter array size: " << std::endl;

    std::cin >> arrSize;
  } while (arrSize > maxSize);

  return arrSize;
}

int countNegative(int* arr, unsigned arrSize) {
  int count = 0;

  for (int i = 0; i < arrSize; i++) {
    if (arr[i] < 0) {
      count++;
    }
  }

  return count;
}

int countPositive(int* arr, unsigned arrSize) {
  int count = 0;

  for (int i = 0; i < arrSize; i++) {
    if (arr[i] >= 0) {
      count++;
    }
  }

  return count;
}

int main() {
  int arr[MAX_SIZE];

  unsigned arr_size = readArraySize(MAX_SIZE);

  readArray(arr, arrSize);

  int negativeCount = countNegative(arr, arrSize);
  int positiveCount = countPositive(arr, arrSize);

  if (negativeCount > positiveCount) {
    std::cout << "Negative numbers are more than the positive" << std::endl;
  }
  else {
    std::cout << "Negative numbers are less than the positive" << std::endl;
  }

  return 1;
}
