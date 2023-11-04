#include <iostream>

bool isPresent(int arr[], int arrSize, int element) {
	for (int i = 0; i < arrSize; i++) {
		if (arr[i] == element) return true;
	}
	return false;
}

bool isSubset(int source[], int sourceSize, int sub[], int subSize) {
	for (int i = 0; i < subSize; i++) {
		if (!isPresent(source, sourceSize, sub[i])) return false;
	}
	return true;
}

bool nonEmptyIntersection(int source[], int sourceSize, int sub[], int subSize) {
	int count = 0;
	for (int i = 0; i < subSize; i++) {
		if (isPresent(source, sourceSize, sub[i])) {
			count += 1;
			break;
		}
	}
	for (int i = 0; i < sourceSize; i++) {
		if (isPresent(sub, subSize, source[i])) {
			count += 1;
			break;
		}
	}
	return count == 2;
}

bool isSubArray(int source[], int sourceSize, int sub[], int subSize) {
	for (int i = 0; i < sourceSize - subSize; i++) {
		bool equal = true;
		for (int j = i; j < i + subSize; j++) {
			if (source[j] != sub[j - i]) {
				equal = false;
				break;
			}
		}
		if (equal) return true;
	}
	return false;
}

int main() {
	int source[] = { 9, -2, 0, 9, 1, 2, 3, 4, 55, 5 };
	int sub[] = { 1, 2, 3 };

	std::cout << isSubset(source, 10, sub, 3) << std::endl;
	std::cout << nonEmptyIntersection(source, 10, sub, 3) << std::endl;
	std::cout << isSubArray(source, 10, sub, 3) << std::endl;
}
