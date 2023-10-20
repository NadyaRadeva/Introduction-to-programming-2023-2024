#include<iostream>
#include<cmath>

int main() {
	double x, f;
	std::cout << "Enter a number: ";
	std::cin >> x;

	if (x < -sqrt(5)) {
		f = -5 + x * x;
	}
	else {
		if (x < -1) {
			f = 5 - x * x;
		} 
		else {
			if (x < 2) {
				f = 1 - 2 * x + x * x;
			}
			else {
				if (x < sqrt(5)) {
					f = 5 - x * x;
				}
				else {
					if (x < 3) {
						f = x * x - 5;
					}
					else {
						f = 1 - 2 * x + x * x;
					}
				}
			}
		}
	}

	std::cout << "f(" << x << ") = " << f << std::endl;

	return 1;
}
