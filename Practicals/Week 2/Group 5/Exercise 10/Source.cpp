#include<iostream>

int main() {
	int n;
	std::cout << "Enter a numbers: ";
	std::cin >> n;
	if (!std::cin) {
		std::cout << "You have entered wrong data!" << std::endl;
		return 1;
	}

	int sum = n * (n + 1) / 2;

	std::cout << "Sum of numbers from 1 to " << n << ":" << " " << sum << std::endl;

  return 1;
}	
