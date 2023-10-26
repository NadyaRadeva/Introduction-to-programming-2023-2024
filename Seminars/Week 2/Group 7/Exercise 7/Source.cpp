#include<iostream>

int main() {
	int x1, y1, radius1, x2, y2, radius2;
	std::cin >> x1 >> y1 >> radius1 >> x2 >> y2 >> radius2;

	double d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

	if (d <= radius1 - radius2) {
		std::cout << "The second circle is inside the first one." << std::endl;
	}
	else if (d <= radius2 - radius1) {
		std::cout << "The first circle is inside the second one." << std::endl;
	}
	else if (d < radius1 + radius2) {
		std::cout << "The two circles intersect to each other." << std::endl;
	}
	else if (d == radius1 + radius2) {
		std::cout << "The two circles touch." << std::endl;
	}
	else {
		std::cout << "The two circles do not touch each other." << std::endl;
	}

	return 1;
}
