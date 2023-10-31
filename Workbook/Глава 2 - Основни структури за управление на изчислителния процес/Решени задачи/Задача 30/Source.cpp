#include<iostream>

int main() {
	int n;
	std::cout << "Enter a number: ";
	std::cin >> n;
	if (!std::cin) {
		std::cout << "Error! You have entered worng data!" << std::endl;
		return 1;
	}
	if (n <= 0 || n > 90) {
		std::cout << "You should enter a number between 1 and 90." << std::endl;
		return 1;
	}

	std::cout << "The Roman version of the number " << n << " is: ";

	if (n >= 40 && n < 50) {
		std::cout << "XL";
		n -= 40;
	}
	else {
		if (n >= 50) {
			std::cout << "L";
			n -= 50;
		}
	}
	switch (n / 10) {
	case 3: std::cout << "X";
	case 2: std::cout << "X";
	case 1: std::cout << "X";
	}
	switch (n % 10) {
	case 9: std::cout << "IX"; break;
	case 8: std::cout << "VIII"; break;
	case 7: std::cout << "VII"; break;
	case 6: std::cout << "VI"; break;
	case 5: std::cout << "V"; break;
	case 4: std::cout << "IV"; break;
	case 3: std::cout << "III"; break;
	case 2: std::cout << "II"; break;
	case 1: std::cout << "I"; break;
	}

	std::cout << std::endl;

	return 1;
}
