#include<iostream>

int main() {
	int n;
	std::cout << "Enter a number: ";
	std::cin >> n;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	int a = 0;
	int b = 1;
	int result;

	for (int i = 2; i <= n; i++) {
		result = a + b;
		a = b;
		b = result;
	}


	std::cout << "Result: " << result << std::endl;

	return 1;
}
