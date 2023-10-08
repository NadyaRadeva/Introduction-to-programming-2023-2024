#include<iostream>

const double PI = 3.14159265;

int main() {
	double radius;
	std::cout << "Enter the length of the radius: ";

	double area, circumference;

	area = PI * radius * radius;
	circumference = 2 * PI * radius;

	std::cout << "The CIRCUMFERENCE of the circle is: " << circumference << std::endl;
	std::cout << "The AREA of the circle is: " << area << std::endl;

	return 1;
}
