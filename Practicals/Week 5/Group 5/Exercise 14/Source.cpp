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

void print_array(int* arr, unsigned arrSize) {
  for (int i = 0; i < arrSize; i++) {
    std::cout << arr[i] << std::endl;
  }
}

void swapElementsInArray(int* arr, int el_1_idx, int el_2_idx) {
  int temp = arr[el_1_idx];
  arr[el_1_idx] = arr[el_2_idx];
  arr[el_2_idx] = temp;
}

void sortArray(int* arr, unsigned arrSize) {
  // bubble sort
  for (int i = 0; i < arrSize - 1; i++) {
    for (int j = i + 1; j < arrSize; j++) {
      if (arr[i] > arr[j]) {
        swapElementsInArray(arr, i, j);
      }
    }
  }
}

int main() {
  int arr[MAX_SIZE];

  unsigned arr_size = readArraySize(MAX_SIZE);

  read_array(arr, arrSize);

  sort_array(arr, arrSize);

  print_array(arr, arrSize);
  return 0;
}
