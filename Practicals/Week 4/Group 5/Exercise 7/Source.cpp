#include<iostream>

bool IsValidNumberInBase(int number, int base) {
    while (number > 0) {
        int digit = number % 10;
        if (digit >= base) {
            return false;
        }
        number /= 10;
    }
    return true;
}

int ConvertBase(int number, int fromBase, int toBase) {
    if (fromBase < 2 || fromBase > 10 || toBase < 2 || toBase > 10) {
        return 1;
    }

    if (!IsValidNumberInBase(number, fromBase)) {
        return 1;
    }

    int decimalValue = 0;
    int power = 0;
    while (number > 0) {
        int digit = number % 10;
        decimalValue += digit * pow(fromBase, power);
        number /= 10;
        power++;
    }

    int result = 0;
    int placeValue = 1;
    while (decimalValue > 0) {
        int remainder = decimalValue % toBase;
        result += remainder * placeValue;
        placeValue *= 10;
        decimalValue /= toBase;
    }

    return result;
}

int main() {
	int x, y, z;
	std::cout << "Enter three numbers: ";
	std::cin >> x >> y >> z;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
	}

	if (y < 2 || y>10) {
		std::cout << "Error! The number isn't in the range!" << std::endl;
		return 1;
	}

	if (z < 2 || z>10) {
		std::cout << "Error! The number isn't in the range!" << std::endl;
		return 1;
	}

    int convertedNumber = ConvertBase(x, y, z);

    if (convertedNumber == -1) {
        std::cout << "Invalid input." << std::endl;
    }
    else {
        std::cout << "Result: " << convertedNumber << std::endl;
    }

    return 1;
}
