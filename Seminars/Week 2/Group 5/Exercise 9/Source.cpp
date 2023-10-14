#include<iostream>
#include<iomanip>

int main() {
	double n;
	std::cout << "Enter a number: ";
	std::cin >> n;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	bool isPowerOfTwo = ceil(log2(n)) == floor(log2(n));

	std::cout << "Is " << n << " power of two? " << " - " << std::boolalpha << isPowerOfTwo << std::endl;

	return 1;
}
