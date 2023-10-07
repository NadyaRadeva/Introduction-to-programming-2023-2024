#include<iostream>
#include<cmath>

int main() {
	double f, x;

	std::cout << "Enter value of X: ";
	std::cin >> x;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}
	if (x < 0) {
		std::cout << "You should enter a POSITIVE number!" << std::endl;
		return 1;
	}

	f = (sin(sin(sin(x))) + cos(cos(cos(x)))) / (log(fabs(x)) + fabs(cos(x)) + exp(x));

	std::cout << "The value of F is: " << f << std::endl;

	return 1;
}
