#include<iostream>
#include<cmath>

bool isPrime(int number);
void findNTwinNumbers(int number);

bool isPrime(int number) {
	for (size_t i = 2; i <= sqrt(number); ++i) {
		if (number % i == 0) {
			return false;
		}
	}

	return true;
}

void findNTwinNumbers(int number) {
	int counter = 0;

	int a = 2;

	while (counter <= number) {
		if (isPrime(a) && isPrime(a + 2)) {
			std::cout << "(" << a << ", " << a + 2 << ")" << std::endl;
			counter++;
		}
		a++;
	}
}

int main() {
	std::cout << "Twin numbers are: ";
	findNTwinNumbers(20);

	return 0;
}
