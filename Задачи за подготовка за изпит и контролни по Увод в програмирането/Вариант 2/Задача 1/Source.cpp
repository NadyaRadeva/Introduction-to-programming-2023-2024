#include<iostream>
#include<iomanip>

int fibNumbers(int number);
bool isFibonacci(int number);

int fibNumbers(int number) {
	if (number == 1 || number == 2) {
		return 1;
	}

	return fibNumbers(number - 1) + fibNumbers(number - 2);
}

bool isFibonacci(int number) {
	int i = 1;
	int fib = fibNumbers(i);

	while (fib < number) {
		++i;
		fib = fibNumbers(i);
	}

	return fib == number;
}

int main() {
	int number;
	std::cout << "Enter your number: ";
	std::cin >> number;
	if (!std::cin || number < 1) {
		throw std::runtime_error("Error! You have entered invalid number!");
		return 1;
	}

	std::cout << "You have entered a Fibonacci number? - " << std::boolalpha << isFibonacci(number) << std::endl;

	return 0;
}
