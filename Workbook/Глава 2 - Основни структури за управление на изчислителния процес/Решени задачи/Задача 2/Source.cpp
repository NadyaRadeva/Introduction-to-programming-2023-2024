#include<iostream>

int main() {
	int a, b;
	std::cout << "Enter number A: ";
	std::cin >> a;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	std::cout << "Enter number B: ";
	std::cin >> b;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	int sum;
	sum = a + b;
	
	double avg;
	avg = sum / 2.0;

	std::cout << "Average of " << a << " and " << b << ": " << avg << std::endl;

	return 1;
}
