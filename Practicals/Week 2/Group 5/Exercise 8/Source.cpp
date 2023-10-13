#include<iostream>

int main() {
	int x1L, y1L, x1R, y1R;
	std::cout << "Enter coordinates of first rectangle: ";
	std::cin >> x1L >> y1L >> x1R >> y1R;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}

	int x2L, y2L, x2R, y2R;
	std::cout << "Enter coordinates of second rectangle: ";
	std::cin >> x2L >> y2L >> x2R >> y2R;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}

	bool areOverlapping = false;

	if (x1L<x2L && y1L>y2L) {
		areOverlapping = true;
	}
	else if (x2L<x1L && y2L>y1L) {
		areOverlapping = true;
	}
	else if (x1R == x2L || x1L==x2R) {
		areOverlapping = true;
	}
	else if (y1R == y2L || y1L == y2R) {
		areOverlapping = true;
	}

	if (areOverlapping) {
		std::cout << "The two rectangles are overlapping!" << std::endl;
	}
	else {
		std::cout << "The two rectangles are not overlapping!" << std::endl;
	}

	return 1;
}
