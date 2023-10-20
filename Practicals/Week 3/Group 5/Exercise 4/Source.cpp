#include<iostream>

int main() {
	int n;
	std::cout << "Enter a number: ";
	std::cin >> n;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	int newNum = n;

	int lastDigit = n % 10;

	int count = 0;
	while (n != 0) {
		n /= 10;
		count++;
	}

	n = newNum;

	int firstDigit = n / pow(10, count - 1);

	n = n - firstDigit * pow(10, count - 1) - lastDigit;

	n = n + lastDigit * pow(10, count - 1) + firstDigit;

	std::cout << "New number: " << n << std::endl;

	return 1;
}
