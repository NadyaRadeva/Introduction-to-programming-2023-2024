#include<iostream>

double func(double x, double y, int i);
double f(double x);

double func(double x, double y, int i) {
	if (i > 11) {
		return y;
	}
	return func(x, y * x + i, i + 1);
}

double f(double x) {
	return func(x, 1, 2);
}

int main() {
	double x;
	std::cout << "Enter the value of x: ";
	std::cin >> x;
	if (!std::cin) {
		throw std::runtime_error("Error! Invalid input!");
		return 1;
	}

	int i = 11;

	std::cout << "You result: " << f(x) << std::endl;

	return 0;
}
