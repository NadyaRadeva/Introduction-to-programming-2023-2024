#include<iostream>

int main() {
	double y = sqrt(99);

	for (size_t i = 1; i <= 99; i+2) {
		y = sqrt(i + y);
	}

	std::cout << "The value is: " << y << std::endl;

	return 1;
}
