#include<iostream>
#include<cmath>

double const PI = 3.1415;

int main() {
	double x1, y1, x2, y2, x3, y3;

	std::cout << "Enter the coordinates of point A: ";
	std::cin >> x1 >> y1;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}

	std::cout << "Enter the coordinates of point B: ";
	std::cin >> x2 >> y2;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}

	std::cout << "Enter the coordinates of point C: ";
	std::cin >> x3 >> y3;
	if (!std::cin) {
		std::cout << "You have entered WRONG data!" << std::endl;
		return 1;
	}

	double radius;
	
	double x12 = x1 - x2;
	double x13 = x1 - x3;

	double y12 = y1 - y2;
	double y13 = y1 - y3;

	double y31 = y3 - y1;
	double y21 = y2 - y1;

	double x31 = x3 - x1;
	double x21 = x2 - x1;

	double sx13 = pow(x1, 2) - pow(x3, 2);
	double sy13 = pow(y1, 2) - pow(y3, 2);
	double sx21 = pow(x2, 2) - pow(x1, 2);
	double sy21 = pow(y2, 2) - pow(y1, 2);

	int f = ((sx13) * (x12)+(sy13) * (x12)+(sx21) * (x13)+(sy21) * (x13)) / (2 * ((y31) * (x12)-(y21) * (x13)));
	int g = ((sx13) * (y12)+(sy13) * (y12)+(sx21) * (y13)+(sy21) * (y13)) / (2 * ((x31) * (y12)-(x21) * (y13)));
	int c = -pow(x1, 2) - pow(y1, 2) - 2 * g * x1 - 2 * f * y1;

	int h = -g;
	int k = -f;

	radius = sqrt(h*h+k*k-c);

	double area, circumference;

	circumference = 2 * PI * radius;
	area = PI * radius * radius;

	std::cout << "The circumference of the circle is: " << circumference << std::endl;
	std::cout << "The area of the circle is: " << area << std::endl;

	return 1;
}
