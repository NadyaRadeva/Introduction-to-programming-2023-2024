#include<iostream>

int findSum(int n, int startingValue, int k);

int findSum(int n, int startingValue, int k) {
	if (startingValue > n)
	{
		return 0;
	}

	return (startingValue + findSum(n, startingValue + k, k));
}

int main() {
	int n;
	std::cout << "Enter the value of N: ";
	std::cin >> n;
	if (!std::cin || n < 1) {
		throw std::runtime_error("Invalid input!");
		return -1;
	}

	int k;
	std::cout << "Enter the value of the step: ";
	std::cin >> k;
	if (!std::cin || k > n || k < 1) {
		throw std::runtime_error("Invalid input!");
		return -1;
	}

	std::cout << "The sum with step " << k << " is: " << findSum(n, 1, k);

	return 0;
}
