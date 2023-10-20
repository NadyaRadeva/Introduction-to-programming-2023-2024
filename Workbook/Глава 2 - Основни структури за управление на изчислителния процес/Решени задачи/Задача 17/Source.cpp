#include<iostream>

int main() {
	unsigned int i;
	std::cout << "i = ";
	std::cin >> i;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	unsigned int low, high;
	low = i & 0x0F;
	high = i & 0x0F;
	high = high >> 4;
	if (low == high) {
		std::cout << "The highest and lowest bytes of " << i << " are equal." << std::endl;
		return 1;
	}
	else {
		std::cout << "The highest and lowest bytes of " << i << " are not equal." << std::endl;
		return 1;
	}

	return 1;
}
