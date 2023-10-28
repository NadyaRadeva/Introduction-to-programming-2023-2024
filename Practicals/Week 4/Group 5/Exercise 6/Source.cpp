#include<iostream>

bool isPerfect(int number) {
	int sum = 0;

	for (size_t i = 1; i < number; ++i) {
		if (number % i == 0) {
			sum += i;
		}
	}

	if (sum == number) {
		return true;
	}
	else {
		return false;
	}
}

int findAllPerfectSum(int a, int b) {
	int perSum = 0;

	for (size_t i = a; i < b; ++i) {
		if (isPerfect(i)) {
			perSum += i;
		}
	}

	return perSum;
}


int main() {
	unsigned int a, b;

	std::cout << "Enter two numbers: ";
	std::cin >> a >> b;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}
	if (a < 0 || b < 0) {
		std::cout << "Error! You should enter two positive numbers!" << std::endl;
		return 1;
	}

	std::cout << "Sum of perfect numbers: " << findAllPerfectSum(a, b) << std::endl;

	return 1;
}
