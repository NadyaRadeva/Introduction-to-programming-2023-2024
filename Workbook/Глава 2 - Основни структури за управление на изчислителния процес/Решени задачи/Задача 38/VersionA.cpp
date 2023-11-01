#include<iostream>

int main() {
	std::cout << "Enter the value of X and N (n>=1): ";
	double x;
	std::cin >> x;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	int n;
	std::cin >> n;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	double y = x;
	double s = sin(x);

	for (size_t i = 2; i <= n; ++i) {
		y = y * x;
		s = s + sin(y);
	}

	std::cout << "s = " << s << std::endl;

	return 1;
}
