#include<iostream>

int main() {
	int n;
	
	do {
		std::cout << "Enter the value of N: ";
		std::cin >> n;
	} while (n < 1);

	int br = 0;

	for (size_t i = 1; i <= n; ++i) {
		int k = i * i * i + 13 * i * n + n * n * n;
		if (k % 5 == 0 || k % 9 == 0) {
			br = br + 1;
		}
	}

	std::cout << "The number of the elements which can be divided by 5 or 9 is: " << br << std::endl;

	return 1;
}
