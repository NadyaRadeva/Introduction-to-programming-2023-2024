#include<iostream>

int main() {
	std::cout << "Enter the value of the bool variable (0 or 1): ";
	int a;
	std::cin >> a;
	if (!std::cin) {
		std::cout << "Error! You have entered the wrong vlaue!" << std::endl;
		return 1;
	}

	std::cout << "Enter the value of the bool variable (0 or 1): ";
	int b;
	std::cin >> b;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	bool nand;
	if (!a && !b) {
		nand = true;
	}
	else {
		if (!a && b) {
			nand = true;
		}
		else {
			if (a && !b) {
				nand = true;
			}
			else {
				nand = false;
			}
		}
	}

	std::cout << a << " nand " << b << " = " << nand << std::endl;
	
	return 1;
}
