#include<iostream>

int main() {
	int x1, y1;
	do {
		std::cout << "x1 = ";
		std::cin >> x1;
		std::cout << "y1 = ";
		std::cin >> y1;
	} while (x1 < 1 || x1>8 || y1 < 1 || y1>8);

	int x2, y2;
	do {
		std::cout << "x2 = ";
		std::cin >> x2;
		std::cout << "y2 = ";
		std::cin >> y2;
	} while (x1 < 1 || x2>8 || y2 < 1 || y2>8);

	if ((x1 - 1 == x2 || x1 == x2 || x1 + 1 == x2) && (x1 - y1 == x2 - y2 || x1 + y1 == x2 + y2)) {
		std::cout << "The second point can be reached by a rook." << std::endl;
	}
	else {
		std::cout << "The second point can not be reached by a rook." << std::endl;
	}

	return 1;
}
