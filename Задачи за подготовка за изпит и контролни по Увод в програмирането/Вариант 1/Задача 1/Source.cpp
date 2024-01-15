#include<iostream>
#include<iomanip>

bool isPrime(int number);

bool isPrime(int number) {
	if (number <= 1) {
        return false;
    }

    for (int i = 2; i <= number / 2; ++i) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;
	if (!std::cin) {
		throw std::runtime_error("Invalid input!");
		return -1;
	}

	std::cout << number << " is prime. - " << std::boolalpha << isPrime(number) << std::endl;

	return 0;
}
