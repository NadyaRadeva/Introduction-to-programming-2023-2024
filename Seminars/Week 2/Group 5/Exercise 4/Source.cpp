#include<iostream>
#include<iomanip>

int main() {
	int a, b;
	std::cout << "Enter two numbers: ";
	std::cin >> a >> b;
	if (!std::cin) {
		std::cout << "You have entered wrong data!" << std::endl;
		return 1;
	}
	if (a < 0 || b < 0) {
		std::cout << "You should enter positive numbers!" << std::endl;
		return 1;
	}

	std::cout << "Sum of the two numbers: " << a + b << std::endl;
	std::cout << "Absolute sum of the two numbers: " << abs(a - b) << std::endl;
	std::cout << "Remainder of the fist number divided by the second: " << a % b << std::endl;
	std::cout << "First number devided by the second (whole part): " << a / b << std::endl;
	std::cout << "First number devided by the second: " << a / (double)b << std::endl;
	std::cout << "First number devided by the second: " << floor(a / (double)b) << std::endl;
	std::cout << "First number devided by the second: " << ceil(a / (double)b) << std::endl;
	std::cout << "Exponentiation: " << pow(a, sqrt(b)) << std::endl;
	std::cout << "Logarithm: " << std::setprecision(5) << log2(floor(a / (double)b)) << std::endl;

	return 1;
}
