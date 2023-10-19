#include<iostream>

int main() {
	double x, y;
	std::cout << "Enter the coordinates of the point: ";
	std::cin >> x >> y;
	if (!std::cin) {
		std::cout << "Error! You have entered wrong data!" << std::endl;
		return 1;
	}

	//полукръг с център (0,0) и радиус 2, разположен над абсцисната ос
	bool c1 = x * x + y * y <= 4 && y >= 0;

	//кръг с център (-1,0) и радиус 1
	bool c2 = (x + 1) * (x + 1) + y * y < 1;

	//кръг с център (1,0) и радиус 1, без да се включва контурът
	bool c3 = (x - 1) * (x - 1) + y * y < 1;

	if ((c1 || c2) && !c3) {
		std::cout << "The point is in the figure." << std::endl;
		return 1;
	}
	else {
		std::cout << "The point is not in the figure." << std::endl;
		return 1;
	}

	return 1;
}
