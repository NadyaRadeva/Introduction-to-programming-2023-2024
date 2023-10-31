#include<iostream>

int main() {
	int n;
	std::cout << "Enter a number: ";
	std::cin >> n;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}
	if (n < 10 || n>99) {
		std::cout << "Error! You should enter a number with two digits!" << std::endl;
		return 1;
	}

	int firstDigit, secondDigit;
	firstDigit = n / 10;
	secondDigit = n % 10;

	if (firstDigit == 1) {
		switch (secondDigit) {
		case 1: std::cout << "едина"; break;
		case 2: std::cout << "двана"; break;
		case 3: std::cout << "трина"; break;
		case 4: std::cout << "четирина"; break;
		case 5:std::cout << "петна"; break;
		case 6:std::cout << "шестна"; break;
		case 7:std::cout << "седемна"; break;
		case 8:std::cout << "осемна"; break;
		case 9:std::cout << "деветна";
		}
		std::cout << "десет." << std::endl;
	}
	else {
		switch (firstDigit) {
		case 2:std::cout << "два"; break;
		case 3:std::cout << "три"; break;
		case 4:std::cout << "четири"; break;
		case 5:std::cout << "пет"; break;
		case 6:std::cout << "шест"; break;
		case 7:std::cout << "седем"; break;
		case 8:std::cout << "осем"; break;
		case 9:std::cout << "девет";
		}
		std::cout << "десет";

		if (secondDigit != 0) {
			std::cout << " и ";
		}
		switch (secondDigit) {
		case 1:std::cout << "едно"; break;
		case 2:std::cout << "две"; break;
		case 3:std::cout << "три"; break;
		case 4:std::cout << "четири"; break;
		case 5:std::cout << "пет"; break;
		case 6:std::cout << "шест"; break;
		case 7:std::cout << "седем"; break;
		case 8:std::cout << "осем"; break;
		case 9:std::cout << "девет";
		}
		std::cout << ".";
	}
	std::cout << std::endl;

	return 1;
}
